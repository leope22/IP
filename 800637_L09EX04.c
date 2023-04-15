/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 04 -  Totiente de Euler
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

#define MDC "MDC(%d,%d) = %d\n"
#define PHI "Phi(%d) = %d\n"
#define EQUACAO "%d ^ %d (mod %d) = %llu\n"
#define VALIDO "Os numeros sao validos para o teorema.\n"
#define INVALIDO "Os numeros nao sao validos para o teorema.\n"

int mdc(int a, int b);

int calcularPhi(int num);

unsigned long long exponenciacaoModular(unsigned long long a, unsigned long long b, unsigned long long c);

/* <<< COMPLETE AQUI >>> */

int main(){
	
	int a, b;
	
	scanf("%d", &a);
	
	scanf("%d", &b);
	
	printf(MDC, a, b, mdc(a,b));
	
	printf(PHI, b, calcularPhi(b));
	
	printf(EQUACAO, a, calcularPhi(b), b, exponenciacaoModular(a, calcularPhi(b), b));
	
	if(mdc(a,b) == 1)
	{
		printf(VALIDO);
	}
	else
	{
		printf(INVALIDO);
	}
	
	return (0);
}

int mdc(int a, int b)
{
	int dividendo, divisor, resto;
	if(a > b)
	{
		dividendo = a;
		
		divisor = b;
	}
	else
	{
		dividendo = b;
		
		divisor = a;
	}
    
    do{
    	resto = dividendo % divisor;
    	
    	if(resto != 0)
    	{
    		dividendo = divisor;
    		divisor = resto;
		}
	}while(resto != 0);
	
	return (divisor);
}

int calcularPhi(int num)
{
    int dividendo = num, divisor = num - 1, resto, contador = 0;
    
    for(int i = 1; i <= num;)
    {
    	do{
	    	resto = dividendo % divisor;
	    	
	    	if(resto != 0)
	    	{
	    		dividendo = divisor;
	    		divisor = resto;
			}
		}while(resto != 0);
	
		if(divisor == 1){
			contador++;
		}
		i++;
		divisor = num - i;
		dividendo = num;
		if (i == num){
			return (contador);
		}
	}
}

unsigned long long exponenciacaoModular(unsigned long long a, unsigned long long b, unsigned long long c)
{
	unsigned long long expmod, resultado = 1;
	
	for(unsigned long long i = 0; i < b; i++)
	{
		expmod = ((resultado) * a) % c;
		resultado = expmod;
	}
	return (resultado);
}
