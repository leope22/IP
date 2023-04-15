/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 05 - Conversor de bases númericas
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
#include <math.h>
int main()
{
	char c0;
	long int a=1, b, d, e=0, c=0, f=0, g, h, i, cont0, cont1, cont2, cont3; 
  	float e1[100];
	
  while (a == 1||a == 2)
	{a=0;e=0;c=0;f=0;cont1=0;
    scanf("%ld", &a);
    switch (a)
   {case 0 : return 0;
    case 1 :
	for(cont1 = 0; ; cont1++){
    scanf("%ld", &e);
	e1[cont1] = e;
	if (e != -1){
	c = c - e1[cont1]*pow(2, cont1);}
	else{break;}}
    printf("%ld\n", -c);
    break;
    case 2 :
    scanf("%ld", &f);
    for(cont2 = 0; ; cont2++){
	 g = (f % 2)==0 ? 0 : 1;
	 f = f / 2;
	 printf("%ld", g);
	 if (f == 0){printf("\n");break;}} break;
	  default: break;}}
    return 0;}