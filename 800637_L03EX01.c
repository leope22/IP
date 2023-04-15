/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 01 - Operações Matemáticas
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

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"

/* <<< Colocar os casos de operações matemáticas para cada número na terceira entrada, colocando condições para a divisão por zero >>> */
#include <stdio.h>
int main()
   {long int a, b, c;
    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf("%ld", &c);
    switch (c)
   {case 1  : printf("%ld\n", a+b);
    break;
    case 2  : printf("%ld\n", a-b);
    break;
    case 3  : printf("%ld\n", b-a);
    break;
    case 4  : printf("%ld\n", a*b);
    break;
    case 5  : if (b == 0) {printf (ZERO_DIV);}
              else {printf("%.2f\n", (float)a/(float)b);}
    break;
    case 6  : if (a == 0) {printf(ZERO_DIV);}
              else {printf("%.2f\n", (float)b/(float)a);}
    break;
    case 7  : if (b == 0) {printf (ZERO_DIV);}
              else {printf("%ld\n", a/b);}
    break;
    case 8  : if (a == 0) {printf(ZERO_DIV);}
              else {printf("%ld\n", b/a);}
    break; 
    case 9  : printf("%ld\n", a%b);
    break;
    case 10 : printf("%ld\n", b%a); 
    break;
    default : printf(OP_INVALIDA);} 
return (0);}