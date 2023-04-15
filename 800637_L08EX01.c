/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 01 - Mercenários
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
 
#define JOGADOR "O jogador venceu!\n"
#define BOSS "O Boss venceu!\n"
#define TURNO "Turno %d\n"
 
typedef int status;
 
typedef struct{
    status vida;
    status dano;
    char tipo;
}carta;
 
/* <<<fiz todas as possibilidades do jogo>>> */
 
int main ()
{
    
    carta jogador, boss;
    
    int i;
    
    scanf(" %c", &jogador.tipo);
    scanf("%d", &jogador.vida);
    scanf("%d", &jogador.dano);
    scanf(" %c", &boss.tipo);
    scanf("%d", &boss.vida);
    scanf("%d", &boss.dano);
 
    switch(jogador.tipo){
        case 'G':     
        if (boss.tipo == 'B'){
            for (int i = 1;;i++){
                boss.vida = boss.vida - 2 * jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }                
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'R'){
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - 2 * boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'G'){
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        } break;
        case 'R':
        if (boss.tipo == 'B'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - 2 * boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'R'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'G'){
            for (int i = 1;;i++){
                boss.vida = boss.vida - 2 * jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        } break;
        case 'B':
        if (boss.tipo == 'B'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'R'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - 2 * jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        }
        if (boss.tipo == 'G'){                  
            for (int i = 1;;i++){               
                boss.vida = boss.vida - jogador.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                jogador.vida = jogador.vida - 2 * boss.dano;
                
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
                
                boss.vida = boss.vida - jogador.dano;    
                            
                if (jogador.vida <= 0){
                    printf(TURNO, i);
                    printf(BOSS);
                    return 0;
                }
                if (boss.vida <= 0){
                    printf(TURNO, i);
                    printf(JOGADOR);
                    return 0;
                }
            }
        } break;
        default:
          break;
    }
    return 0;
}