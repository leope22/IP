/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 05 - Histograma de Sinal
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

#include <stdio.h>

/* <<< COMPLETE AQUI >>>*/

#include <math.h>

int main(){ 
  
  long int hora, minuto, horamin, i=0, numero, maior, menor, aux, mediana;
  
  do{
  scanf("%ld", &hora);
  
  if (hora == 0){
    return 0;
  }

  switch (hora)
  {
    case 0 : return 0;
    default : scanf("%ld", &minuto);
  
    if (minuto == 0){
    return 0;
  }

  horamin = hora * 60;
  i = horamin / minuto;
  long int numeros[i];
 
  for (long int j = 0; j < i; j++)
  {
  	scanf("%ld", &numero);
    numeros[j] = numero;
  }

    if (i == 1){

    for(int g = -100; g < numero ; g++)
  {
  	printf(".");
  }
    printf("!");
    printf("\n");
    break;
  }
  else{
  
  maior = numeros[0];

  for (long int k = 1; k < i; k++)
  {
      if (numeros[k] >= maior)
      {
          maior = numeros[k];
      }
  }
  
  menor = numeros[0];

  for (long int l = 1; l < i; l++)
  {
      if (numeros[l] <= menor)
      {
          menor = numeros[l];
      }
  }
  for (int contador = 1; contador < i; contador++)
  {
  for (int p = 0; p < i - 1; p++)
  {
      if (numeros[p] > numeros[p + 1])
	  {
    		aux = numeros[p];
            numeros[p] = numeros[p + 1];
            numeros[p + 1] = aux;
      }
  }
  }
  if (i % 2 == 0)
  {
  	mediana = ((numeros[(i - 1) / 2] + numeros[((i - 1) / 2) + 1]) / 2);
  }
  if (i % 2 != 0)
  {
  	mediana = (numeros[(((i - 1) - 1) / 2) + 1]);
  }
  
  for(int m = -100; m < menor ; m++)
  {
  	printf(".");
  }
    printf(":");
  
  for(int f = menor + 1; f <= mediana; f++)
  {
  	printf(".");
  }
  
  for(int n = mediana + 1; n < maior; n++)
  {
  	printf(" ");
  }
    printf("!");
    printf("\n");
  }
  }
  }
  while (hora != 0);
  return 0;
}