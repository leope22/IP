/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 1 - Jogo da velha
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

#define INVALIDO "Posicao invalida!\n"
#define EMPATE "Empate\n"
#define VENCEDOR1 "Jogador 1 venceu!\n"
#define VENCEDOR2 "Jogador 2 venceu!\n"

/* <<< COMPLETE AQUI >>>*/

int main(){

    int jogo[3][3] = {{0, 0, 0},
	                  {0, 0, 0},
		              {0, 0, 0},};
	
    int i, j, k, l;

    for(int t = 0;; t++){
    for(int d = 0;; d++){
    	scanf("%d %d", &i, &j); 

      if((jogo[i][j] != 0)  ||
		 (i == k && j == l) || 
	     (i != 2 && i != 1 && i != 0) || 
	     (j != 2 && j != 1 && j != 0)){printf(INVALIDO);}

        else if((jogo[i][j] == 0) &&
		        (i != k || j != l) &&
	            (i == 2 || i == 1 || i == 0) &&
	            (j == 2 || j == 1 || j == 0)){break;}}
	                  
    	switch(i)  {case 0: if(j == 0){jogo[0][0] = 4;}
    	                    if(j == 1){jogo[0][1] = 4;}
    	                    if(j == 2){jogo[0][2] = 4;};break;
    	            case 1: if(j == 0){jogo[1][0] = 4;}
    	                    if(j == 1){jogo[1][1] = 4;}
    	                    if(j == 2){jogo[1][2] = 4;};break;
	                case 2: if(j == 0){jogo[2][0] = 4;}
    	                    if(j == 1){jogo[2][1] = 4;}
    	                    if(j == 2){jogo[2][2] = 4;};break;}

    
    if((jogo[0][0] != 0) && (jogo[0][1] != 0) && (jogo[0][2] != 0) &&
       (jogo[1][0] != 0) && (jogo[1][1] != 0) && (jogo[1][2] != 0) &&
	   (jogo[2][0] != 0) && (jogo[2][1] != 0) && (jogo[2][2] != 0)){
        printf(EMPATE); break;}

		
		if((jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2] && jogo[0][0] == 4)||
		   (jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2] && jogo[0][0] == 4)||
	       (jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0] && jogo[0][0] == 4)||
		   (jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1] && jogo[0][1] == 4)||
		   (jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2] && jogo[0][2] == 4)||
		   (jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2] && jogo[1][0] == 4)||
		   (jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2] && jogo[2][0] == 4)||
		   (jogo[2][0] == jogo[1][1] && jogo[2][0] == jogo[0][2] && jogo[2][0] == 4)){
		   printf(VENCEDOR1); break;}

    for(int d = 0;; d++){
	  scanf("%d %d", &k, &l);
  	
    if((jogo[k][l] != 0) ||
       (k == i && l == j) ||
	   (k != 2 && k != 1 && k != 0) ||
	   (l != 2 && l != 1 && l != 0)){printf(INVALIDO);}
	
    else if((jogo[k][l] == 0)  &&
	        (k != i || l != j) &&
		    (k == 2 || k == 1 || k == 0) &&
			(l == 2 || l == 1 || l == 0)){break;}}
		                              
       switch(k)  {case 0: if(l == 0){jogo[0][0] = 8;}
    	                   if(l == 1){jogo[0][1] = 8;}
    	                   if(l == 2){jogo[0][2] = 8;};break;
    	           case 1: if(l == 0){jogo[1][0] = 8;}
    	                   if(l == 1){jogo[1][1] = 8;}
    	                   if(l == 2){jogo[1][2] = 8;};break;
	               case 2: if(l == 0){jogo[2][0] = 8;}
    	                   if(l == 1){jogo[2][1] = 8;}
    	                   if(l == 2){jogo[2][2] = 8;};break;}
        
         if((jogo[0][0] != 0) && (jogo[0][1] != 0) && (jogo[0][2] != 0) &&
            (jogo[1][0] != 0) && (jogo[1][1] != 0) && (jogo[1][2] != 0) &&
		    (jogo[2][0] != 0) && (jogo[2][1] != 0) && (jogo[2][2] != 0)){
            printf(EMPATE); break;}
							
	       if((jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2] && jogo[0][0] == 8)||
		      (jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2] && jogo[0][0] == 8)||
	          (jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0] && jogo[0][0] == 8)||
		      (jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1] && jogo[0][1] == 8)||
		      (jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2] && jogo[0][2] == 8)||
              (jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2] && jogo[1][0] == 8)||
	          (jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2] && jogo[2][0] == 8)||
	          (jogo[2][0] == jogo[1][1] && jogo[2][0] == jogo[0][2] && jogo[2][0] == 8)){
		        printf(VENCEDOR2); break;}}
					              
      /*for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%d ", jogo[i][j]);}
      	printf("\n");}*/
                                 	
    return 0;
}