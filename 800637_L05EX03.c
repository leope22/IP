/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 03 - Sexy Primes
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

/* <<< COMPLETE AQUI >>> */

int main(){
	int valormax, p1, p2, div, prsix, numdivp1, numdivp2;
	scanf("%d", &valormax);
	for(p1 = 1; p1 < valormax; p1++){
		p2 = p1 + 6;
		prsix = p2 - p1;
		div = 1; numdivp1 = 0; numdivp2 = 0;
		do {
		    if(p1 % div == 0){
				numdivp1++;}
			if(p2 % div == 0){
				numdivp2++;}
			div++;}
		while (div <= p2);
	if (prsix == 6){
		if (numdivp1 == 2){
			if (numdivp2 == 2){
				printf("(%d, %d)\n", p1, p2);
			    }
	    	}
	    }
    }
return 0;
}