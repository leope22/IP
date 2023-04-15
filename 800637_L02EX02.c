/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 02 - Gasto de energia
 *
 *  Instruções
 *  ----------
 *
 *	Este arquivo contém o código que auxiliará no desenvolvimento do
 *	exercício. Você precisará completar as partes requisitadas.
 *
 *  OBS: Não utilize conceitos ainda não aprendidos em aula, todos os
 *  exercícios podem ser resolvidos apenas com o conteúdo já passado.
 *
 * ================================================================== *
 *	Dados do aluno:
 *
 *  RA: 800637
 *  Nome: Leonardo Oliveira Pedro
 *
 * ================================================================== */

/* <<< COMPLETE AQUI >>> */
#include <stdio.h>
int main() {
	float gh, gm, mh, mm, chh, chm, ah, am, coh, com;
    scanf("%f %f", &gh, &gm);
    scanf("%f %f", &mh, &mm);
    scanf("%f %f", &chh, &chm);
    scanf("%f %f", &ah, &am);
    scanf("%f %f", &coh, &com);
    float x = ((gh + (gm/60))*130 + (mh + (mm/60))*2000 + (chh + (chm/60))*3500 + (ah + (am/60))*100 + (coh + (com/60))*180)*0.000525;  
    printf("R$%.2f\n", x); // calcula por meio do tempo gastado com cada eletrodoméstico em horas multiplicado pela potência e dividido por mil, já que está em kwh
    return 0;
}