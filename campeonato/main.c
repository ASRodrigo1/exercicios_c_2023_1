#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[50];
	int pontos;
	int n_vitorias;
	int n_empates;
	int n_derrotas;
	int gols_marcados;
	int gols_sofridos;
} time;


int main(){
	
	int n, i, n_jogos, gols_1, gols_2, j;
	char nome_1[50], nome_2[50];
	time *times;
	scanf("%d", &n);

	times = (time *) malloc(n * sizeof(time));

	for(i = 0; i < n; i++){
		setbuf(stdin, NULL);
		fgets(times[i].nome, 50, stdin);
	}
	scanf("%d", &n_jogos);
	for(i = 0; i < n_jogos; i++){
		setbuf(stdin, NULL);
		fgets(nome_1, 50, stdin);
		fgets(nome_2, 50, stdin);
		scanf("%d", &gols_1);
		scanf("%d", &gols_2);
		for(j = 0; j < n; j++){
			if(strcmp(times[j].nome, nome_1)){
				printf("Entrou\n");
				// Soma a quantidade de gols
				times[j].gols_marcados += gols_1;
				times[j].gols_sofridos += gols_2;

				// Atualiza vitoria/empate/derrota
				if(gols_1 > gols_2){
					times[j].n_vitorias += 1;
					times[j].pontos += 3;
				}
				else if(gols_2 > gols_1){
					times[j].n_derrotas += 1;
				}
				else{
					times[j].n_empates += 1;
					times[j].pontos += 1;
				}
			}
			else if(strcmp(times[j].nome, nome_2)){
				printf("Entrou2\n");
				// Soma a quantidade de gols
				times[j].gols_marcados += gols_2;
				times[j].gols_sofridos += gols_1;

				// Atualiza vitoria/empate/derrota
                                if(gols_2 > gols_1){ 
                                        times[j].n_vitorias += 1;
					times[j].pontos += 3;
                                }
                                else if(gols_1 > gols_2){ 
                                        times[j].n_derrotas += 1;
                                }
                                else{ 
                                        times[j].n_empates += 1;
					times[j].pontos += 1;
                                }
			}
		}
	}
	
	for(i = 0; i < n; i++){
		printf("%s,%d,%d,%d,%d,%d,%d", times[i].nome, times[i].pontos, times[i].n_vitorias, times[i].n_empates, times[i].n_derrotas, times[i].gols_marcados, times[i].gols_sofridos);
	}

	return 0;
}

