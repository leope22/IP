/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 01 - Calculadora
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
#include <math.h>

/* <<< COMPLETE AQUI >>> */

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"
int main()
   {long int a, b, c=1, d;
    scanf("%ld", &a);
    scanf("%ld", &b);
do {scanf("%ld", &c);
   {switch (c)
   {case 0  : return (0);break;
    case 1  : printf("%ld\n", a+b);break;
    case 2  : printf("%ld\n", a-b);break;
    case 3  : printf("%ld\n", b-a);break;
    case 4  : printf("%ld\n", a*b);break;
    case 5  : if (b == 0) {printf ("divisão por 0!\n");}
              else {printf("%.2f\n", (float)a/(float)b);}break;
    case 6  : if (a == 0) {printf("divisão por 0!\n");}
              else {printf("%.2f\n", (float)b/(float)a);}break;
    case 7  : if (b == 0) {printf ("divisão por 0!\n");}
              else {printf("%ld\n", a/b);}break;
    case 8  : if (a == 0) {printf("divisão por 0!\n");}
              else {printf("%ld\n", b/a);}break; 
    case 9  : printf("%ld\n", a%b);break;
    case 10 : printf("%ld\n", b%a); break;
    case 11 : printf("%.0f\n", pow((double)a,(double)b)); break;
    case 12 : printf("%.0f\n", pow((double)b,(double)a)); break;
    default : printf("opção inválida!\n");}}}
    while (c!=0);
    return (0);}