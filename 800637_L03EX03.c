/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 03 - Tabela Verdade
 *
 *  Instruções
 *  ----------
 *
 *  Este arquivo contém o código que auxiliará no desenvolvimento do
 *  exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *  Dados do aluno:
 *
 *  RA: 800637
 *  Nome: Leonardo Oliveira Pedro
 *
 * ================================================================== */

#define VERDADEIRO "V\n"
#define FALSO "F\n"
#define INVALIDO "entrada inválida!\n"

/* <<< Cada resultado da tabela verdade de acordo com a lógica matemática em uma mistura de if else com switch >>> */
#include <stdio.h>
int main()
   {char a, b, c;
    scanf(" %c", &a);
    scanf(" %c", &b);
    scanf(" %c", &c);
    
	switch (c)
   {case 'E': if ((a =='V') && (b=='V')){printf(VERDADEIRO);}
              else if ((a =='V') && (b=='F')){printf(FALSO);}
              else if ((a =='F') && (b=='V')){printf(FALSO);}
              else if ((a =='F') && (b=='F')){printf(FALSO);}
              else {printf(INVALIDO);}
    break;
    case 'O': if ((a =='V') && (b=='V')){printf(VERDADEIRO);}
              else if ((a =='V') && (b=='F')){printf(VERDADEIRO);}
              else if ((a =='F') && (b=='V')){printf(VERDADEIRO);}
              else if ((a =='F') && (b=='F')){printf(FALSO);}
              else {printf(INVALIDO);}
    break;
    case 'I': if ((a =='V') && (b=='V')){printf(VERDADEIRO);}
              else if ((a =='V') && (b=='F')){printf(FALSO);}
              else if ((a =='F') && (b=='V')){printf(VERDADEIRO);}
              else if ((a =='F') && (b=='F')){printf(VERDADEIRO);}
              else {printf(INVALIDO);}
    break;
    case 'B': if ((a =='V') && (b=='V')){printf(VERDADEIRO);}
              else if ((a =='V') && (b=='F')){printf(FALSO);}
              else if ((a =='F') && (b=='V')){printf(FALSO);}
              else if ((a =='F') && (b=='F')){printf(VERDADEIRO);}
              else {printf(INVALIDO);}
    break;
    default : printf(INVALIDO);}
    return (0);}