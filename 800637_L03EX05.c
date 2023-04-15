/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 05 - Montar marmitex
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

/* <<< Definir os casos de marmita pequena, média e grande, definir as possibilidades de valores de acordo com as teclas e somar tudo no final, separando o caso de poder pedir duas vezes a guarnição >>> */
#include <stdio.h>
int main()
   {char a, d0, d1; int b, c, e; float aa, bb, cc, dd0, dd1, ee; scanf("%c", &a);
    if (a == 'p')
	       {scanf("%d", &b);
                scanf("%d", &c);
                scanf(" %c", &d0);
                scanf("%d", &e);}
    else if (a == 'm')
	       {scanf("%d", &b);
                scanf("%d", &c);
                scanf(" %c", &d0);
                scanf(" %c", &d1);
                scanf("%d", &e);}
    else if (a == 'g')
	       {scanf("%d", &b);
                scanf("%d", &c);
                scanf(" %c", &d0);
                scanf(" %c", &d1);
                scanf("%d", &e);};
    switch(a) {case 'p': aa = 12.00;break;
               case 'm': aa = 16.00;break;
               case 'g': aa = 18.00;break;}
    switch(b) {case 0: bb = 2.00;break;
               case 1: bb = 0.00;break;}
    switch(c) {case 0: cc = 2.50;break;
               case 1: cc = 0.00;break;}
    switch(d0){case 'f': dd0 = 0.00;break;
               case 'p': dd0 = 1.00;break;
               case 'c': dd0 = 2.00;break;}
    switch(d1){case 'f': dd1 = 0.00;break;
               case 'p': dd1 = 1.00;break;
               case 'c': dd1 = 2.00;break;}
    switch(e) {case 0: ee = 0.00;break;
               case 1: ee = 0.50;break;}
    if(a == 'p'){printf("R$ %.2f\n", aa-bb-cc+dd0+ee);}
    else if((a == 'm') || (a == 'g')){printf("R$ %.2f\n", aa-bb-cc+dd0+dd1+ee);}
    return 0;}