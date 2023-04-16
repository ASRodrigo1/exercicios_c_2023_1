#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i;
	scanf("%d", &n);
	float *p, media = 0;
	p = (float *) malloc(n * sizeof(float));
	
	for(i = 0; i < n; i++){
		scanf("%f", &p[i]);
	}
	for(i = 0; i < n; i++){
		media += p[i];
	}
	media /= n;
	printf("%.2f", media);
	
	free(p);
	p = NULL;

	return 0;
}
