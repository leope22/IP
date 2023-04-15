/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 02 - Labirinto de estados
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

#include <stdio.h>

#define PREMIO "Voce chegou ao fim!\n"
#define FALHOU "Voce falhou!\n"
#define A "Estado A\n"
#define B "Estado B\n"
#define C "Estado C\n"
#define D "Estado D\n"

int vetor[15], num;

void estadoA(int n);

void estadoB(int n);

void estadoC(int n);

void estadoD(int n);

void fim();

int main(){
	
	for(num = 0; num < 15; num++)
	{
		scanf("%d", &vetor[num]);
	}
	
	num = 0;
	
	estadoA(vetor[num]);
    
    return (0);
}

/* <<< COMPLETE AQUI >>> */

void estadoA(int n)
{
	
	if(num == 15)
	{
		printf(A);
		printf(FALHOU);
	}
	else if(n == 2)
	{
		num++;
		estadoB(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void estadoB(int n)
{
	if(num == 15)
	{
    	printf(B);
		printf(FALHOU);
	}
	else if(n == 4)
	{
		num++;
		estadoC(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void estadoC(int n)
{
	if(num == 15)
	{
    	printf(C);
		printf(FALHOU);
	}
	else if(n == 1)
	{
		num++;
		estadoD(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void estadoD(int n)
{
	if(num == 15)
	{
    	printf(D);
		printf(FALHOU);
	}
	else if(n == 3)
	{
		fim();
	}
    else if(n == 4)
	{
		num++;
		estadoC(vetor[num]);
	}
	else if(n == 2)
	{
		num++;
		estadoB(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void fim()
{
	printf(PREMIO);
}
