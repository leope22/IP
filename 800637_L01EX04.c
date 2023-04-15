/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 04 - Código Steam
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
 * ================================================================== */

/* <<< COMPLETE AQUI >>> */
#include <stdio.h>
int main() {
	char a, b, c, d; 
	int dia;
    scanf("%i", &dia);
    scanf(" %c%c%c%c",&a,&b,&c,&d);
    int z = a + dia;
    printf("%d\n", z);
    int y = b - dia;
    printf("%d\n", y);
    int u = c * dia;
    printf("%d\n", u);
    int i = d - 64;
    printf("%d\n", i); // calcula o valor das letras pela tabela e faz as contas
    return 0;
}