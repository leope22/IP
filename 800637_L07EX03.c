/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 3 - Sudoku
 *
 *  Instruções
 *  ----------
 *
 *  Este arquivo contém o código que auxiliará no desenvolvimento do
 *  exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *  Dados do aluno:
 *
 *  RA: 800637
 *  Nome: Leonardo Oliveira Pedro
 *
 * ================================================================== */
#include <stdio.h>

#define ERRADO  "solucao incorreta!\n"
#define CORRETO "solucao correta!\n"

/* <<<soma todas as linhas e todas as colunas, assim como soma os blocos 3x3 e todos têm que dar 45, no final soma-se os vetores completos e se todos derem 405 (45*9) o sudoku está correto>>>*/
int main(){
	
	int jogo[9][9] = {{0, 0, 0, 0, 0, 0, 0, 0, 0},
	                  {0, 0, 0, 0, 0, 0, 0, 0, 0},
		                {0, 0, 0, 0, 0, 0, 0, 0, 0},
				         	  {0, 0, 0, 0, 0, 0, 0, 0, 0},
				        	  {0, 0, 0, 0, 0, 0, 0, 0, 0},
					          {0, 0, 0, 0, 0, 0, 0, 0, 0},
				            {0, 0, 0, 0, 0, 0, 0, 0, 0},
					          {0, 0, 0, 0, 0, 0, 0, 0, 0},
					          {0, 0, 0, 0, 0, 0, 0, 0, 0},};
					    
	int somablocos[3][3] = {{0, 0, 0},
	                        {0, 0, 0},
		                      {0, 0, 0},};
					    
	int somalinha[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	int somacoluna[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	int aux1=0, aux2=0, aux3=0;
	
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){ 
			scanf("%i", &jogo[i][j]);
		}
    }
	for (int i = 0; i < 9; i++){
		for (int j = 0, aux0 = 0; j < 9; j++){
		    aux0 = jogo[i][j];
			somalinha[i] = somalinha[i] + aux0;
			somacoluna[j] = somacoluna[j] + aux0;
			somablocos[i/3][j/3] = somablocos[i/3][j/3] + aux0;
		} 
	}	
	for (int i = 0; i < 9; i++){
      if(somalinha[i] != 45){
        break;
      }
      else{
	    aux1 = somalinha[i] + aux1;
      //printf("%d ", somalinha[i]);
      }
    }
    //printf("\n");
    for (int j = 0; j < 9; j++){
      if(somacoluna[j] != 45){
        break;
      }
      else{
	    aux2 = somacoluna[j] + aux2;
      //printf("%d ", somacoluna[j]);
      }
    }
    //printf("\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){		
		    aux3 = somablocos[i][j] + aux3;
        //printf("%d ", somablocos[i][j]);
		}
    //printf("\n");
	} 
	if(aux1 == 405 && aux2 == 405 && aux3 == 405){
		printf(CORRETO);		
	}
	else{
		printf(ERRADO);
	}
    return 0;
}