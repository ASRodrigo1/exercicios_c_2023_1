#include <stdio.h>
#include <string.h>


struct atleta{
	char nome[100];
	char sporte[100];
	int idade;
	float altura;
};

int main(){
	
	struct atleta atletas[3];
	int i;
	char nome[100];
	
	for(i = 0; i < 3; i++){
		fgets(nome, sizeof(nome), stdin);
		strcpy(atletas[i].nome, nome);
		fgets(nome, sizeof(nome), stdin);
		strcpy(atletas[i].sporte, nome);
		scanf("%d", &atletas[i].idade);
		scanf("%f", &atletas[i].altura);
		getchar();
	}
	
	int max_idade = 0;
	int indx_max_idade = 0;
	float max_altura = 0.0;
	int indx_max_altura = 0;
	for(i = 0; i < 3; i++){
		if(atletas[i].idade > max_idade){
			indx_max_idade = i;
			max_idade = atletas[i].idade;
		}
		if(atletas[i].altura > max_altura){
			indx_max_altura = i;
			max_altura = atletas[i].altura;
		}
	}
	
	printf("%s", atletas[indx_max_altura].nome);
	printf("%s", atletas[indx_max_idade].nome);

	return 0;
}
