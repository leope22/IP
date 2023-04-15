/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 05 - Senha
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
 
/* <<< COMPLETE AQUI >>> */
#include <stdio.h>
 
int main(){ 
  
  long int maiusc=0, minusc=0, cnumero=0, ccaracesp=0, pelomseis=0, semaspespcra=0, pend1='0', pend2='0',pend3='0', pend4='0', pend5='0', pend6='0';
  char senha;
  for(;;){
  pend1='0'; pend2='0'; pend3='0'; pend4='0';pend5='0'; pend6='0';
      maiusc=0; minusc=0; cnumero=0; ccaracesp=0; pelomseis=0; semaspespcra=0;
      senha=0;
  while(senha != '\n'){
          
  scanf("%c", &senha);
  pelomseis++;
  
  if (senha <= 90 && senha >= 65){
    maiusc++;
  }
  
  if (senha <= 122 && senha >= 97){
    minusc++;
  }
 
  if (senha <= 57 && senha >= 48){
    cnumero++;
  }
  
  if ((senha >= 40 && senha <= 45) || (senha >= 123 && senha <= 126) || (senha == 58 && senha == 64) || senha == 33 || senha == 36 || senha == 37 || senha == 94 || senha == 38 || senha == 95 || senha == 91 || senha == 93 || senha == 35 || senha == 46 || senha == 47 || senha == 92){
    ccaracesp++;
  }
  
  if (senha == 32 || senha == 34 || senha == 39 || senha == 96){
  semaspespcra++;
  }
  }
  if(senha == '\n'){
        if (maiusc == 0){
            pend1 = '1';
        } 
        if (minusc == 0){
            pend2 = '1';
        }
        if (cnumero == 0){
            pend3 = '1';
        }
        if (ccaracesp == 0){
            pend4 = '1';
        }
        if (pelomseis < 6){
            pend5 = '1';
        }
        if (semaspespcra != 0){
            pend6 = '1';
        }
         
        if (pend1 == '0' && pend2 == '0' && pend3 == '0' && pend4 == '0' && pend5 == '0' && pend6 == '0'){
            printf("senha forte!\n");
            return 0;
        } 
        if (pend1 != '0' || pend2 != '0' || pend3 != '0' || pend4 != '0' || pend5 != '0' || pend6 != '0'){
            printf("senha inválida!\n");
            printf("pendências:");
            if (pend1 != '0'){
                printf(" 1");
            }
            if (pend2 != '0'){
                printf(" 2");
            }           
            if (pend3 != '0'){
                printf(" 3");
            }
            if (pend4 != '0'){
                printf(" 4");
            }
            if (pend5 != '0'){
                printf(" 5");
            }
            if (pend6 != '0'){
                printf(" 6");
            }                    
            printf("\n");               
        }
  }
      }
  return 0;
}