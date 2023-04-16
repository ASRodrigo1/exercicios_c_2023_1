#include <stdio.h>

void troca(int *a, int *b, int *c){
	int aux = *b, aux2 = *c;
	*b = *a;
	*c = aux;
	*a = aux2;
}

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	troca(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	return 0;
}
