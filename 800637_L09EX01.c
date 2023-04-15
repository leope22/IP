/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 01 - Calculadora complexa
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
#include <math.h>

#define INVALIDO "Operacao invalida\n"
#define MMC "MMC entre %d e %d eh %d\n"
#define MDC "MDC entre %d e %d eh %d\n"
#define FATORIAL "%d! = %llu\n"
#define PRIMO "Numero %d eh primo\n"
#define nPRIMO "Numero %d nao eh primo\n"

int mmc(int n1, int n2);

int mdc(int n1, int n2);

unsigned long long fatorial(int n1);

int primo(int n);

double hipotenusa(int n1, int n2);

/* <<< COMPLETE AQUI >>> */

int main(){
	
	int operacao, num1, num2;
	
	for(;;)
	{
		scanf("%d", &operacao);
		switch(operacao)
		{	
            case 0: return (0);
            
            case 1: scanf("%d %d", &num1, &num2);
			        printf(MMC, num1, num2, mmc(num1, num2)); 
					break;
					
            case 2: scanf("%d %d", &num1, &num2);
			        printf(MDC, num1, num2, mdc(num1, num2)); 
					break;
					
            case 3: scanf("%d", &num1);
			        printf(FATORIAL, num1, fatorial(num1));
					break;
					
            case 4: scanf("%d", &num1);
                    if(primo(num1) == 1)
					{
                    	printf(PRIMO, num1);
					}
					else
					{
						printf(nPRIMO, num1);
					}
					break;
					
            case 5: scanf("%d %d", &num1, &num2);
                    printf("%lf", hipotenusa(num1, num2));
			        break;

            default: printf(INVALIDO);
	                 break;
        }
    }
		
	return (0);
}

int mmc(int n1, int n2)
{
	for(int i = 1; i <= (n1 * n2); i++)
	{
		if(i % n1 == 0 && i % n2 == 0)
		{
            return (i);
		}
	}
}

int mdc(int n1, int n2)
{
	// Algoritmo de Euclides
	
	int resto;
	
	do{
		resto = n1 % n2;
		n1 = n2;
		n2 = resto;
	}while(resto != 0);
	
	return (n1);
}

unsigned long long fatorial(int n1)
{
	unsigned long long fatorial = 1;
	
	for(int i = n1; i > 1; i--)
	{
		fatorial = fatorial * i;
	}
	return (fatorial);
}

int primo(int n)
{
	int divisores = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			divisores++;
		}
	}
	if(divisores == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

double hipotenusa(int n1, int n2)
{
	double hipotenusa;
	
	hipotenusa = sqrt (pow(n1, 2) + pow(n2, 2));
	
	return (hipotenusa);
}