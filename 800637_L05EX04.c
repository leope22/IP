/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 04 - Seleção de arquivos
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
#define SELECIONADO "O arquivo %d foi selecionado.\n"

/* <<< COMPLETE AQUI >>> */
int main()
{
	char c0;
	int a, b, d, e, c=0, cont0, cont1, cont2, e1[100];
    scanf(" %c", &c0);
    switch (c0)
   {case 'S' : 
    scanf("%d", &a);
    scanf("%d", &b);
    	for(cont0 = 0;cont0 <= b - a; cont0++){
    		c = a + cont0;
    		printf("O arquivo %d foi selecionado.\n", c);}
    		if (c == b)
    		{break;}
    case 'C' : 
    scanf("%d", &d);
    for(cont1 = 0;cont1 < d; cont1++){
    scanf("%d", &e);
	e1[cont1] = e;}
	for(cont2 = 0;cont2 < d; cont2++){
    printf("O arquivo %d foi selecionado.\n", e1[cont2]);
	}}
    return 0;}
