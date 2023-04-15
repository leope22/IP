/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 01 - Validador de CPF
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
#define VALIDO "CPF valido!\n"
#define INVALIDO "CPF invalido!\n"
#define ETAPA1 "Falha na Etapa 1\n"
#define ETAPA2 "Falha na Etapa 2\n"
/* <<< COMPLETE AQUI >>> */
int main(){
int cpf0,cpf1,cpf2,cpf3,cpf4,cpf5,cpf6,cpf7,cpf8,cpf9,cpf10,cont,i=0,j=0,b,c,d,e,f,g;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&cpf0,&cpf1,&cpf2,&cpf3,&cpf4,&cpf5,&cpf6,&cpf7,&cpf8,&cpf9,&cpf10);
    float cpf[11] = {cpf0,cpf1,cpf2,cpf3,cpf4,cpf5,cpf6,cpf7,cpf8,cpf9,cpf10};
	for(cont=0;cont<9;cont++)
	   {b = cpf[cont];
	    i=i+(b*(10-cont));}
	for(cont=0;cont<10;cont++)
	   {c = cpf[cont];
	    j=j+(c*(11-cont));}
    d=i*10; 
	e=d%11;
	f=j*10;
	g=f%11;
    if(e==cpf9){
    if(g!=cpf10){
	printf(INVALIDO);
	printf(ETAPA2);} 
    else{
    printf(VALIDO);}}
    else{
    printf(INVALIDO);
	printf(ETAPA1);}
	return 0;}