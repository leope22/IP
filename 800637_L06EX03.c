/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 03 - Números romanos
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

/* <<< COMPLETE AQUI >>> */
int main()
{
  long int numero, unidade, dezena, centena;
  char C;
  scanf("%ld", &numero);
  
  unidade = numero % 10;
  dezena = ((numero % 100) - unidade) / 10;
  centena = numero / 100;
  
  switch(centena){
  case 1: 
  printf("C");
  break;
  
  case 2: 
  printf("CC");
  break;

  case 3: 
  printf("CCC");
  break;
}
  switch(dezena){
  case 1: 
  printf("X");
  break;
  
  case 2: 
  printf("XX");
  break;
  
  case 3:
  printf("XXX");
  break;
  
  case 4: 
  printf("XL");
  break;
  
  case 5: 
  printf("L");
  break;
  
  case 6: 
  printf("LX");
  break;

  case 7: 
  printf("LXX");
  break;

  case 8: 
  printf("LXXX");
  break;    

  case 9: 
  printf("XC");
  break;  
}
  switch(unidade){
  
  case 1: 
  printf("I\n");
  break;

  case 2: 
  printf("II\n");
  break;

  case 3: 
  printf("III\n");
  break;

  case 4: 
  printf("IV\n");
  break;

  case 5: 
  printf("V\n");
  break;

  case 6: 
  printf("VI\n");
  break;

  case 7: 
  printf("VII\n");
  break;
  
  case 8: 
  printf("VIII\n");
  break;    
 
  case 9: 
  printf("IX\n");
  break;
}
  return 0;
}