/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 02 - Dia da semana
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
 
#define SEGUNDA  "segunda-feira\n"
#define TERCA    "terça-feira\n"
#define QUARTA   "quarta-feira\n"
#define QUINTA   "quinta-feira\n"
#define SEXTA    "sexta-feira\n"
#define SABADO   "sábado\n"
#define DOMINGO  "domingo\n"
#define INVALIDA "data inválida!\n"
 
enum {jan = 1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};
enum {seg = 0, ter, qua, qui, sex, sab, dom};
 
typedef struct {
    int dia, mes, ano;
} data;
 
/* <<<coloquei os cálculos e as condições de datas corretas>>> */
 
int main ()
{
    int A, B, C, D, diasem;
 
    data d1;
 
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
 
    A = d1.ano - 1900;
 
    if ((A % 4 == 0) && (d1.mes < 3)) {
        B = (A / 4) - 1;
    } else if ((A % 4 == 0) && (A % 100 == 0) && (A % 400 == 0) && (d1.mes < 3)) {
        B = (A / 4) - 1;
    } else {
        B = A / 4;
    }
 
    if ((d1.ano >= 1900 && d1.ano <= 2399) && (d1.mes >= 1 && d1.mes <= 12)) {
        if (((d1.dia >= 1 && d1.dia <= 31) && (d1.mes == 1 || d1.mes == 3 || d1.mes == 5 || d1.mes == 7 || d1.mes == 8 || d1.mes == 10 || d1.mes == 12)) ||
            ((d1.dia >= 1 && d1.dia <= 30) && (d1.mes == 4 || d1.mes == 6 || d1.mes == 9 || d1.mes == 11)) ||
            ((d1.dia >= 1 && d1.dia <= 29) && (d1.mes == 2) && ((A % 4 == 0) || (A % 4 == 0 && A % 100 == 0 && A % 400 == 0))) ||
            ((d1.dia >= 1 && d1.dia <= 28) && (d1.mes == 2) && ((A % 4 != 0 || A % 100 != 0 || A % 400 != 0)))) {
                        switch(d1.mes) {
                            case 1: C = 0; break;
                            case 2: C = 3; break;
                            case 3: C = 3; break;
                            case 4: C = 6; break;
                            case 5: C = 1; break;
                            case 6: C = 4; break;
                            case 7: C = 6; break;
                            case 8: C = 2; break;
                            case 9: C = 5; break;
                            case 10: C = 0; break;
                            case 11: C = 3; break;
                            case 12: C = 5; break;
                            default: break;
                        }
 
                D = d1.dia - 1;
 
                diasem = (A + B + C + D) % 7;
 
                if (diasem == 0) {
                    printf(SEGUNDA);
                } else if (diasem == 1) {
                    printf(TERCA);
                } else if (diasem == 2) {
                    printf(QUARTA);
                } else if (diasem == 3) {
                    printf(QUINTA);
                } else if (diasem == 4) {
                    printf(SEXTA);
                } else if (diasem == 5) {
                    printf(SABADO);
                } else if (diasem == 6) {
                    printf(DOMINGO);
                }
            }
            else {
                printf(INVALIDA);
            }
        }
        else {
            printf(INVALIDA);
        }
 
    //printf("\n");
 
    //printf("%d/%d/%d", d1.dia, d1.mes, d1.ano);
 
    return (0);
}