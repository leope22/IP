/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 03 - Jeanne Louise Calment
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
int idade, aid, anoesp;
scanf("%i", &idade);
scanf("%i", &aid);
anoesp = 122 + (aid - idade); // recebe a idade, o ano que está com essa idade e calcula a data de nascimento e dps faz o somatório com 122
printf("%i\n", anoesp);
    return (0);
}