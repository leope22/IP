/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 01 - Calculadora de senhas
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
	char a, b, c, d, e, f;
    scanf(" %c%c%c", &a, &b, &c);
    scanf(" %c%c%c", &d, &e, &f);
    float x = ((d - a)*676) + ((e - b)*26) + (f - c);
    printf("%.0f", x); // fiz a diferença do valor da tabela ascii das letras de cada posicionamento, sendo o primeiro apenas ele, o segundo vezes o alfabeto que será rodado na posição anterior para todas as suas letras, e o terceiro no alfabeto ao quadrado sendo que serão as três combinações e somo todas essas possibilidades
    return 0;
}