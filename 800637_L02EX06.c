/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 06 - Movimentos Limitados
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
	int x, y;
    scanf("%i %i", &x, &y);
    int a = 100 - (x + x*(x % 2));
    int b = 100 - (y + y*(y % 2));
    printf("%i\n", a);
    printf("%i", b); // faz a diferença de 100 com o némero somado ao seu resto da divisão por dois ,multiplicado a ele mesmo, para que ele dobre o valor se for um número ímpar, pois o resto é 1 nesse caso, e se for par o resto é zero e não dobra
    return 0;
}