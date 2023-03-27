#include <stdio.h>

#define MAX_LEN 100

int main(){
	
	int n, vector[MAX_LEN], i, j, unicos=0, flag;
	
	scanf("%d", &n);
	
	for(i=0; i < n; i++){
		scanf("%d", &vector[i]);
	}
	
	for(i=0; i < n; i++){
		flag=1;
		for(j=0; j < n; j++){
			if((vector[i] == vector[j]) && i != j){
				flag=0;
			}
		}
		if(flag){
			unicos ++;
		}
	}

	printf("%d\n", unicos);

	return 0;
}
