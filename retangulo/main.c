#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


struct ponto{
	int x;
	int y;
};

struct retangulo{
	struct ponto p1;
	struct ponto p2; 
};

int main(){

	struct retangulo ret;	

	scanf("%d", &ret.p1.x);
	scanf("%d", &ret.p1.y);
	scanf("%d", &ret.p2.x);
	scanf("%d", &ret.p2.y);
	
	int lado_a, lado_b, diag, area;
	
	lado_a = abs(ret.p2.y - ret.p1.y);
	lado_b = abs(ret.p2.x - ret.p1.x);
	
	area = lado_a * lado_b;
	
	diag = sqrt(pow(lado_a, 2) + pow(lado_b, 2));
	
	printf("%d %d\n", area, diag);

	return 0;
}
