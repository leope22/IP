/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 03 - Rolagem Crítica!
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
    float lda, ddo;
    scanf("%f %f", &lda, &ddo);
    float a = (lda + 1) - (ddo);
    float b = 100 * ((a / lda) * (a / lda));
    printf("%.2f",b); // a diferença de valor dos lados do dado para com a defesa de seu oponente sendo o valor maior ou igual a essa defesa e pegando esse valor e coloca-se na probabilidade comparada ao total de lados em duas jogadas, ou seja, multiplicado
    return 0;
}