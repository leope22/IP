/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 02 - Tributação dos impostos
 *
 *  Instruções
 *  ----------
 *
 *	Este arquivo contém o código que auxiliará no desenvolvimento do
 *	exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *	Dados do aluno:
 *
 *  RA: 800637
 *  Nome: Leonardo Oliveira Pedro
 *
 * ================================================================== */

/* <<< Separar os casos de números e seus valores com as respectivas taxas de impostos >>> */
#include <stdio.h>
int main()
   {float num;
    scanf("%f", &num);
    if (num<=1500){printf("Isento!\n");}
    else if ((num>=1500.01) && (num<=4000)){printf("R$ %.2f\n", (num-1500)*0.1);}
    else if ((num>=4000.01) && (num<=5000)){printf("R$ %.2f\n", 250+(num-4000)*0.17);}
    else {printf("R$ %.2f\n", 420+(num-5000)*0.30);}
    return (0);}
