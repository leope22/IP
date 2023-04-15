/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 03 - Papers, please!
 *
 *  Instruções
 *  ----------
 *
 *    Este arquivo contém o código que auxiliará no desenvolvimento do
 *    exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *    Dados do aluno:
 *
 *  RA: 800637
 *  Nome: Leonardo Oliveira Pedro
 *
 * ================================================================== */
#include <stdio.h>
 
#define REJ "Rejeitado\n"
#define APR "Aprovado\n"
#define RELATORIO "id:%d vencimento:%d emissor:%c genero:%c\n"
 
typedef struct imigrante{
    int ID;
    int ano;
    char pais;
    char genero;
    int status;
} Imigrante;
/* <<< COMPLETE AQUI >>> */
 
int main ()
{
    int num;
 
    scanf("%d", &num);
 
    Imigrante inf[num];
 
    for(int i = 0; i < num; i++){
 
        scanf("%d", &inf[i].ID);
        scanf("%d", &inf[i].ano);
        scanf(" %c", &inf[i].pais);
        scanf(" %c", &inf[i].genero);
 
        if ((inf[i].ID >= 100 && inf[i].ID <=999) &&
            (inf[i].ano >= 2021) &&
            (inf[i].pais == 'A' || inf[i].pais == 'K' || inf[i].pais == 'S') &&
            (inf[i].genero == 'M' || inf[i].genero == 'F' || inf[i].genero == 'O')){
                inf[i].status = 1;
                printf(APR);
        }
        else {
            inf[i].status = 0;
            printf(REJ);
        }
    }
 
    printf("Resultados:\n");
 
    for(int j = 0; j < num; j++){
        printf(RELATORIO, inf[j].ID, inf[j].ano, inf[j].pais, inf[j].genero);
        if(inf[j].status == 1){
            printf(APR);
        } else{
            printf(REJ);
        }
    }
    return (0);
}