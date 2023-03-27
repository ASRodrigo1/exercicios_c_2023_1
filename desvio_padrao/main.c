#include <stdio.h>
#include <math.h>

#define MAX_LEN 100

int main(){
	
	int vector[MAX_LEN], n, i;
	float media=0, total=0;

	scanf("%d", &n);
	
	for(i=0; i < n; i++){
		scanf("%d", &vector[i]);
	}
	
	for(i=0; i < n; i++){
		media += vector[i];
	}
	media /= n;

	for(i=0; i < n; i++){
		total += pow((vector[i] - media), 2);
	}
	total = total / n;
	total = sqrt(total);

	printf("%.2f\n", total);

	return 0;
}
