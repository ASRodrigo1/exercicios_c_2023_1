#include <stdio.h>
#include <limits.h>

int main(){
		
	unsigned int n;
	int maior=INT_MIN, numero, qnt=0;
	
	printf("Quantos numeros? ");
	scanf("%u", &n);

	for(; n>0; n--){
		scanf("%d", &numero);
		if(numero > maior){
			maior = numero;
			qnt = 1;
		}
		else if(numero == maior){
			qnt ++;
		}
	}
	
	printf("%d %d\n", maior, qnt);

	return 0;
}
