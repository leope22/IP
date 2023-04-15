/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 10 - Exercício 01 - Contador de Palavras
 *
 *  Instruções
 *  ----------
 *
 *    Este arquivo contém o código que auxiliará no desenvolvimento do
 *    exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *    Dados do aluno:
 *
 *  RA: 800637
 *  Nome: Leonardo Oliveira Pedro
 *
 * ================================================================== */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
#define MAX 5000
#define VOGAIS "Vogais = %d\n"
#define CONSOANTES "Consoantes = %d\n"
#define ESPECIAIS "Especiais = %d\n"
#define PALAVRAS "Palavras = %d\n"
 
/* <<< COMPLETE AQUI >>> */
int main()
{
    char texto[MAX];
    
    int vogais = 0, consoantes = 0, especiais = 0, palavras = 0;
    
    while(scanf("%s", texto) != EOF)
    {
        for(int i = 0; i < strlen(texto); i++)
        {
            if((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
            {
                if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
                   texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
            	{
                	vogais++;
            	}
                else
            	{
                    consoantes++;
            	}
        	}
        }
    
        for(int i = 0; i < strlen(texto); i++)
        {
            if((texto[i] >= 33 && texto[i] <= 47) || (texto[i] >= 58 && texto[i] <= 64) ||
               (texto[i] >= 91 && texto[i] <= 96) || (texto[i] >= 123 && texto[i] <= 126))
            {
                especiais++;
            }
        }
    
        for(int i = 0; i < strlen(texto); i++)
        {
            if(texto[i] != ' ' && texto[i] != '\t')
            {
                palavras++;
                while(texto[i] != ' ' && texto[i] != '\t')
                {
                    i++;
                }
            }
        }
    }
    
	printf(VOGAIS,vogais);
	printf(CONSOANTES,consoantes);
	printf(ESPECIAIS,especiais);
    printf(PALAVRAS, palavras);
    
    return (0);
}