/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 06 - Horário ônibus
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
int main() {
int ohor, a, b;
scanf("%i",&ohor);
scanf("%i",&a);
scanf("%i",&b);
int hm = a * 60;
int mt = hm + b;
int mf = mt - ohor;
int he = mf / 60;
int me = mf % 60;
printf("%i:%i\n", he, me); // transforma tudo em minutos, faz a diferença do tempo para chegar lá e depois transforma em horas com o resto sendo os minutos
    return 0;
}