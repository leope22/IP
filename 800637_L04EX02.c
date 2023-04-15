/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 02 - Joquempô
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
#define EMPATE "Empate!\n"
#define JOGADOR1 "Jogador 1 venceu!\n"
#define JOGADOR2 "Jogador 2 venceu!\n"
#define VENCEDOR1 "Jogador 1 venceu a partida!\n"
#define VENCEDOR2 "Jogador 2 venceu a partida!\n"
#define PLACAR "Placar final: J1 - %d, J2 - %d\n"

/* <<< COMPLETE AQUI >>> */
#define EI "Entrada inválida!\n"
#include <stdio.h>
int main()
    {char a, b;
	int c=0, d=0;
	while(c <=3 || d <=3)
	{do {scanf(" %c", &a);
    if((a != 'R') && (a != 'P') && (a != 'T')) {printf(EI);}}
    while ((a != 'R') && (a != 'P') && (a != 'T'));
	do {scanf(" %c", &b);
	if((b != 'R') && (b != 'P') && (b != 'T')) {printf(EI);}}
	while ((b != 'R') && (b != 'P') && (b != 'T'));
    if((a == 'R') && (b == 'P')) {printf(JOGADOR2); d++;}
	else if((a == 'P') && (b == 'R')) {printf(JOGADOR1); c++;}
	else if((a == 'R') && (b == 'T')) {printf(JOGADOR1); c++;}
	else if((a == 'T') && (b == 'R')) {printf(JOGADOR2); d++;}
	else if((a == 'P') && (b == 'T')) {printf(JOGADOR2); d++;}
	else if((a == 'T') && (b == 'P')) {printf(JOGADOR1); c++;}
    else {printf(EMPATE);}
	if (c == 3 || d == 3)
	{break;}}
	if (c > d) {printf(VENCEDOR1); printf(PLACAR, c, d);}
	else {printf(VENCEDOR2); printf(PLACAR, c, d);}
return 0;}