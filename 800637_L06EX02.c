/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 02 - Sequência de Recamán
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

/* <<< COMPLETE AQUI >>>*/

int main(){
  
  long int seqr[20000], termo1, termo2, i = 1;
  seqr[0] = 0;

    do{

      scanf("%ld", &termo1);

      if(termo1 == 0){
        return 0;
      }
    
      scanf("%ld", &termo2); 

      if(termo2 == 0){
        return 0;
      }

      while (i <= termo1 || i <= termo2){
      
        seqr[i] = (seqr[i - 1] - i);

        if(seqr[i] <= 0){

          seqr[i] = (seqr[i - 1] + i);
        } 
        else if(seqr[i] > 0){

          for(long int j = 1; j < i; j++){         

            if(seqr[i] == seqr[j]){              

              seqr[i] = (seqr[i - 1] + i);
              break;
            }    
          }
        }
        i++;
      }
      if(seqr[termo1] > seqr[termo2]){ 

        printf("1");
        printf("\n");
      }
      else if(seqr[termo1] < seqr[termo2]){

        printf("2");
        printf("\n");
      }
      else if(seqr[termo1] == seqr[termo2]){

        printf("0");
        printf("\n");
      }
    }while (termo1 != 0); 
  return 0;
}