/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 05 - Dona Lurdina
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
	int valor, qtd;
	scanf("%i", &valor);
    qtd = (valor / 100) + ((valor % 100) / 50) + (((valor % 100) % 50) / 25) + ((((valor % 100) % 50) % 25) / 10) + (((((valor % 100) % 50) % 25) % 10) / 5) + ((((((valor % 100) % 50) % 25) % 10) % 5) / 1);
    printf("%i\n", qtd); // vai dividindo os inteiros e os somando, ao mesmo tempo que o consecutivo valor a ser dividido será o resto da divisão do anterior
    return (0);
}