/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 02 - Cifra de Cesar
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
	char func, cod, cod2;
	int desl, caract, cont0, cont1;
	scanf("%c", &func);
	scanf("%d", &desl);
	scanf("%d\n", &caract);
	if(func == 'C'){
	for(cont0 = 0; cont0 < caract; cont0++){
		scanf("%c", &cod);
		cod2 = cod - 97;
        cod2 = cod2 + desl;
    	cod2 = cod2 % 26;
    	cod2 = cod2 + 97;
    	printf("%c", cod2);
	    }
    }
    else{
    for(cont1 = 0; cont1 < caract; cont1++){
    	scanf("%c", &cod);
    	cod2 = cod - 97;
    	cod2 = cod2 - desl;
    	cod2 = cod2 % 26;
    if(cod2 < 0){
    	cod2 = cod2 + 26;
    	cod2 = cod2 + 97;
    	printf("%c", cod2);
    }
    else{
		cod2 = cod2 + 97;
		printf("%c", cod2);
	   }	
	  }
	 }
	return 0;
}