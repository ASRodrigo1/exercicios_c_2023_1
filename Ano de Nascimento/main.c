#include <stdio.h>

int main(){
	
	unsigned short int ano;
	unsigned char idade;

	printf("Informe a sua idade: ");
	scanf("%hhu", &idade);
	printf("Informe o ano atual: ");
	scanf("%hu", &ano);

	printf("Voce nasceu no ano: %d\n", ano - idade);

	return 0;
}
