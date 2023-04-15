/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 04 - Números por extenso
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

/* <<< completar todas as possibilidades com if else junto de switch >>> */
#include <stdio.h>
int main()
   {char a, b;
    scanf(" %c%c", &a, &b);
    switch (a)
   {case '9': if (b=='0'){printf("noventa");}
              else if (b=='1'){printf("noventa e um");}
              else if (b=='2'){printf("noventa e dois");}
              else if (b=='3'){printf("noventa e três");}
              else if (b=='4'){printf("noventa e quatro");}
              else if (b=='5'){printf("noventa e cinco");}
              else if (b=='6'){printf("noventa e seis");}			  		  			                
              else if (b=='7'){printf("noventa e sete");}
              else if (b=='8'){printf("noventa e oito");}
              else {printf("noventa e nove");}
    break;
    case '8': if (b=='0'){printf("oitenta");}
              else if (b=='1'){printf("oitenta e um");}
              else if (b=='2'){printf("oitenta e dois");}
              else if (b=='3'){printf("oitenta e três");}
              else if (b=='4'){printf("oitenta e quatro");}
              else if (b=='5'){printf("oitenta e cinco");}
              else if (b=='6'){printf("oitenta e seis");}			  		  			                
              else if (b=='7'){printf("oitenta e sete");}
              else if (b=='8'){printf("oitenta e oito");}
              else {printf("oitenta e nove");}
    break;
    case '7': if (b=='0'){printf("setenta");}
              else if (b=='1'){printf("setenta e um");}
              else if (b=='2'){printf("setenta e dois");}
              else if (b=='3'){printf("setenta e três");}
              else if (b=='4'){printf("setenta e quatro");}
              else if (b=='5'){printf("setenta e cinco");}
              else if (b=='6'){printf("setenta e seis");}			  		  			                
              else if (b=='7'){printf("setenta e sete");}
              else if (b=='8'){printf("setenta e oito");}
              else {printf("setenta e nove");}
    break;
    case '6': if (b=='0'){printf("sessenta");}
              else if (b=='1'){printf("sessenta e um");}
              else if (b=='2'){printf("sessenta e dois");}
              else if (b=='3'){printf("sessenta e três");}
              else if (b=='4'){printf("sessenta e quatro");}
              else if (b=='5'){printf("sessenta e cinco");}
              else if (b=='6'){printf("sessenta e seis");}			  		  			                
              else if (b=='7'){printf("sessenta e sete");}
              else if (b=='8'){printf("sessenta e oito");}
              else {printf("sessenta e nove");}
    break;
    case '5': if (b=='0'){printf("cinquenta");}
              else if (b=='1'){printf("cinquenta e um");}
              else if (b=='2'){printf("cinquenta e dois");}
              else if (b=='3'){printf("cinquenta e três");}
              else if (b=='4'){printf("cinquenta e quatro");}
              else if (b=='5'){printf("cinquenta e cinco");}
              else if (b=='6'){printf("cinquenta e seis");}			  		  			                
              else if (b=='7'){printf("cinquenta e sete");}
              else if (b=='8'){printf("cinquenta e oito");}
              else if (b=='9'){printf("cinquenta e nove");}
              else {printf("número inválido");}
    break;
    case '4': if (b=='0'){printf("quarenta");}
              else if (b=='1'){printf("quarenta e um");}
              else if (b=='2'){printf("quarenta e dois");}
              else if (b=='3'){printf("quarenta e três");}
              else if (b=='4'){printf("quarenta e quatro");}
              else if (b=='5'){printf("quarenta e cinco");}
              else if (b=='6'){printf("quarenta e seis");}			  		  			                
              else if (b=='7'){printf("quarenta e sete");}
              else if (b=='8'){printf("quarenta e oito");}
              else if (b=='9'){printf("quarenta e nove");}
              else {printf("número inválido");}
    break;
    case '3': if (b=='0'){printf("trinta");}
              else if (b=='1'){printf("trinta e um");}
              else if (b=='2'){printf("trinta e dois");}
              else if (b=='3'){printf("trinta e três");}
              else if (b=='4'){printf("trinta e quatro");}
              else if (b=='5'){printf("trinta e cinco");}
              else if (b=='6'){printf("trinta e seis");}			  		  			                
              else if (b=='7'){printf("trinta e sete");}
              else if (b=='8'){printf("trinta e oito");}
              else if (b=='9'){printf("trinta e nove");}
              else {printf("número inválido");}
    break;
    case '2': if (b=='0'){printf("vinte");}
              else if (b=='1'){printf("vinte e um");}
              else if (b=='2'){printf("vinte e dois");}
              else if (b=='3'){printf("vinte e três");}
              else if (b=='4'){printf("vinte e quatro");}
              else if (b=='5'){printf("vinte e cinco");}
              else if (b=='6'){printf("vinte e seis");}			  		  			                
              else if (b=='7'){printf("vinte e sete");}
              else if (b=='8'){printf("vinte e oito");}
              else {printf("vinte e nove");}
    break;
    case '1': if (b=='0'){printf("dez");}
              else if (b=='1'){printf("onze");}
              else if (b=='2'){printf("doze");}
              else if (b=='3'){printf("treze");}
              else if (b=='4'){printf("quatorze");}
              else if (b=='5'){printf("quinze");}
              else if (b=='6'){printf("dezesseis");}			  		  			                
              else if (b=='7'){printf("dezessete");}
              else if (b=='8'){printf("dezoito");}
              else {printf("dezenove");}
    break;
    case '0': if (b=='0'){printf("zero");}
              else if (b=='1'){printf("um");}
              else if (b=='2'){printf("dois");}
              else if (b=='3'){printf("três");}
              else if (b=='4'){printf("quatro");}
              else if (b=='5'){printf("cinco");}
              else if (b=='6'){printf("seis");}			  		  			                
              else if (b=='7'){printf("sete");}
              else if (b=='8'){printf("oito");}
              else {printf("nove");}
    break;
    default : printf("inválido");}
    return (0);}