/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 03 - Raiz
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
{float num, raiz, c, e;
scanf("%f", &num);
raiz=num/2;
while((raiz*raiz<=(0.97*num)) || (raiz*raiz>=(1.03)*num))
{c=num/raiz; e=raiz+c; raiz=e/2;}
printf("%.1f", raiz);
return 0;}
