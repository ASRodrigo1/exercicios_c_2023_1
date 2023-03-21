#include <stdio.h>
#include <limits.h>

int main(){
	
	int maior = INT_MIN, soma = 0, qnt = 0, numero;
	
	while(1){
		scanf("%d", &numero);
		if(numero == 0){
			break;
		}
		else{
			soma += numero;
			qnt ++;
			if(numero > maior){
				maior = numero;
			}
		}
	}
	if(qnt){
		soma /= qnt;
	}
	printf("%d %d %d", qnt, maior, soma);
	

	return 0;
}
