/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 01 - Média das notas
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
	float mM, mP, pP, pS, mS;
	scanf("%f", &mM);
	scanf("%f", &mP);
	scanf("%f", &pP);
	scanf("%f", &pS);
	mS=(mM*(pP+pS)-pP*mP)/pS; // fórmula para encontrar a média da seegunda metade da lista
	printf("%0.2f\n", mS);
    return (0);
}