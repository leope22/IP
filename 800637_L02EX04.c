/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 04 - Ao Fundo da Piscina
 *
 *  Instruções
 *  ----------
 *
 *	Este arquivo contém o código que auxiliará no desenvolvimento do
 *	exercício. Você precisará completar as partes requisitadas.
 *
 *  OBS: Não utilize conceitos ainda não aprendidos em aula, todos os
 *  exercícios podem ser resolvidos apenas com o conteúdo já passado.
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
int main() {
	float a, c, l;
    scanf("%f", &a);
    scanf("%f", &c);
    scanf("%f", &l);
    float x = ((c*a*2)+(l*a*2)+(l*c))*115;
    printf("%.2f", x); // coloco os valores em metros e somo tudo multiplicado pelo valor
    return 0;
}