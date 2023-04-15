/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 02 - Calculadora
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

/* <<< COMPLETE AQUI >>> */
#include <stdio.h>
int main()
{	
float num1, num2, soma, subps, subsp, mult, divps, divsp, somatotal;
scanf("%f", &num1);
scanf("%f", &num2);
soma = num1 + num2;
printf("%.0f\n", soma);
subps = num1 - num2;
printf("%.0f\n", subps);
subsp = num2 - num1;
printf("%.0f\n", subsp);
mult = num1 * num2;
printf("%.0f\n", mult);
divps = num1 / num2;
printf("%0.2f\n", divps);
divsp = num2 / num1;
printf("%0.2f\n", divsp);
int qintps = (int) num1 / (int) num2;
printf("%i\n", qintps);
int qintsp = (int) num2 / (int) num1;
printf("%i\n", qintsp);
int restops = (int) num1 % (int) num2;
printf("%i\n", restops);
int restosp = (int) num2 % (int) num1;
printf("%i\n", restosp);
somatotal = soma + subps + subsp + mult + divps + divsp + qintps + qintsp + restops + restosp;
printf("%0.2f\n", somatotal); // fiz os cálculos e depois somei tudo
    return (0);
}