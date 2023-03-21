#include <stdio.h>

int main(){
	
	unsigned short int  num;
	unsigned char p, s, t;
	
	printf("Informe o numero: ");
	scanf("%hu", &num);

	p = num / 100;
	s = (num % 100) / 10;
	t = ((num % 100) % 10);
	
	printf("%d%d%d\n", t, s, p);

	return 0;
}
