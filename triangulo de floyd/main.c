#include <stdio.h>

int main(){
	
	unsigned int n, valor = 2, colunas = 2, i;
	
	printf("Quantas linhas? ");
	scanf("%u", &n);
	
	for(; n > 1; n--, colunas++){
		for(i=0; i < colunas; i++){
			printf("%d ", valor);
			valor++;
		}
		printf("\n");
	}

	return 0;
}
