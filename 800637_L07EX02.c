/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 2 - Batalha Naval
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
 
#define VENCEU      "Todas as embarcacoes foram destruidas\n"
#define ATINGIDO    "Embarcacao atingida!\n"
#define ERROU       "Agua!\n"
#define PRINT_NAVIO "Dano [%d]: %.2f%%\n"

int main(){

    int jogo[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},};
					    
	for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
        scanf("%d", &jogo[i][j]);
		}
	}
					    
	int tam, posic1, posic2, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0;
	
	for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
    if (jogo[i][j] == 1){a++;
		}
		else if (jogo[i][j] == 2){b++;
		}
		else if (jogo[i][j] == 3){c++;
		}
		else if (jogo[i][j] == 4){d++;
		}
		else if (jogo[i][j] == 5){e++;
		}
		else if (jogo[i][j] == 6){f++;
		}
		else if (jogo[i][j] == 7){g++;
	    }
	    else if (jogo[i][j] == 8){h++;
	    }
	}
    }
	
	i = a; j = b; k = c; l = d; m = e; n = f; o = g; p = h;
	
	scanf("%d", &tam);
	
	  for(int i = 0; i < tam; i++){
		scanf("%d %d", &posic2, &posic1);
		if (jogo[posic1][posic2] == 0){printf(ERROU);
		}
		else if (jogo[posic1][posic2] == 1){jogo[posic1][posic2] = 0; printf(ATINGIDO); a--; 
		}
		else if (jogo[posic1][posic2] == 2){jogo[posic1][posic2] = 0; printf(ATINGIDO); b--;
		}
		else if (jogo[posic1][posic2] == 3){jogo[posic1][posic2] = 0; printf(ATINGIDO); c--;
		}
		else if (jogo[posic1][posic2] == 4){jogo[posic1][posic2] = 0; printf(ATINGIDO); d--;
		}
		else if (jogo[posic1][posic2] == 5){jogo[posic1][posic2] = 0; printf(ATINGIDO); e--;
		}
		else if (jogo[posic1][posic2] == 6){jogo[posic1][posic2] = 0; printf(ATINGIDO); f--;
		}
		else if (jogo[posic1][posic2] == 7){jogo[posic1][posic2] = 0; printf(ATINGIDO); g--;
		}
		else if (jogo[posic1][posic2] == 8){jogo[posic1][posic2] = 0; printf(ATINGIDO); h--;
		}
	}
	
	int vetor1[8] = {a,b,c,d,e,f,g,h};
	int vetor2[8] = {i,j,k,l,m,n,o,p};
    
    if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0){
    	printf(VENCEU); return 0;
	}
	else{    
    float vetor3[8] = {0,0,0,0,0,0,0,0};

    for(int i = 0; i < 8; i++){
    	    if (vetor2[i] == 0){
	        	continue;
	        }
    		float porcen = ((float) vetor1[i] * 100) / (float) vetor2[i];
    		vetor3[i] = 100 - porcen;
	        printf(PRINT_NAVIO, i + 1, vetor3[i]);
		}
    }
    return 0;
}