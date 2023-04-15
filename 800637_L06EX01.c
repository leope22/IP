/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 1 - Juízes olímpicos
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
int main()
{
  long int njuizes;

  scanf("%ld", &njuizes);

  float nota[100], maior = 0, menor = 0, soma = 0, media = 0;

  for (long int i = 0; i < njuizes; i++)
  {
      scanf("%f", &nota[i]);
  }
  
  maior = nota[0];

  for (long int j = 1; j < njuizes; j++)
  {
      if (nota[j] >= maior)
      {
          maior = nota[j];
      }
  }
  
  menor = nota[0];

  for (long int k = 1; k < njuizes; k++)
  {
      if (nota[k] <= menor)
      {
          menor = nota[k];
      }
  }

  for (long int l = 0; l < njuizes; l++)
  {
      soma += nota[l];
  }

  media = (soma - maior - menor) / (njuizes - 2);

  //printf("A maior eh %0.2f, a menor eh %0.2f.\n", maior, menor);
  printf("%0.2f\n", media);
  
    return 0;
}