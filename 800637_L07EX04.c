/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 4 - GAAL
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

#define INVALIDO "Opcao Invalida!\n"

/* <<< COMPLETE AQUI >>>*/

int main(){
	
	int matriz[3][3] = {{0, 0, 0},
    		            {0, 0, 0},
				        {0, 0, 0},};
				        
    int matriz2[3][3] = {{0, 0, 0},
    		             {0, 0, 0},
				         {0, 0, 0},};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){ 
			scanf("%d", &matriz[i][j]);
		}
    }
	    
    int operacao, num, prodd1, prodd2, dets, cof1, cof2, cof3, detl;
    
    for(;;){
    scanf("%d", &operacao);
    
    switch(operacao)  {case 0: for(int i = 0; i < 3; i++){
		                       for(int j = 0; j < 3; j++){
                               printf("%d ", matriz[i][j]);}
      	                        printf("\n");}return 0;
								      	               
					   case 1: scanf("%d", &num);
					           for(int i = 0; i < 3; i++){
		                       for(int j = 0; j < 3; j++){ 
		                       matriz[i][j] = matriz[i][j] * (num);
		                       }};break;
		                       
	                   case 2: for(int i = 0; i < 3; i++){
		                       for(int j = 0; j < 3; j++){
		                       matriz2[i][j] = matriz[j][i];
		                       }}
		                       
		                       for(int i = 0; i < 3; i++){
		                       for(int j = 0; j < 3; j++){
		                       matriz[i][j] = matriz2[i][j];
		                       }}
							   
							 /*for(int i = 0; i < 3; i++){
		                       for(int j = 0; j < 3; j++){
                               printf("%d ", matriz[i][j]);}
      	                        printf("\n");}*/
								break;
		               
		               case 3: prodd1 = ((matriz[0][0]*matriz[1][1]*matriz[2][2]) +
					                     (matriz[0][1]*matriz[1][2]*matriz[2][0]) + 
									     (matriz[0][2]*matriz[1][0]*matriz[2][1]));
									     
						       prodd2 = - ((matriz[0][1]*matriz[1][0]*matriz[2][2]) + 
									       (matriz[0][0]*matriz[1][2]*matriz[2][1]) + 
									       (matriz[0][2]*matriz[1][1]*matriz[2][0]));
									       
							   dets = prodd1 + prodd2;
							   printf("%d %d\n%d\n", prodd1, prodd2, dets);break;
							   
					   case 4: cof1 = matriz[0][0] * 1*((matriz[1][1]*matriz[2][2])-(matriz[1][2]*matriz[2][1])); //-1 elevado a 0 + 0
							   cof2 = matriz[1][0] * -1*((matriz[0][1]*matriz[2][2])-(matriz[0][2]*matriz[2][1])); //-1 elevado a 1 + 0
							   cof3 = matriz[2][0] * 1*((matriz[0][1]*matriz[1][2])-(matriz[0][2]*matriz[1][1])); //-1 elevado a 2 + 0
							   detl = cof1 + cof2 + cof3;
							   printf("%d %d %d\n%d\n", cof1, cof2, cof3, detl);break;
							   
					   default:	printf(INVALIDO);break;}}
    return 0;
}