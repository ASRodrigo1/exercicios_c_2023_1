#include <stdio.h>

int main(){
		
	int notas[3][10], i, j, pior_1=0, pior_2=0, pior_3=0;

	for(j=0; j < 10; j++){
		for(i=0; i < 3; i++){
			scanf("%d", &notas[i][j]);
		}
	}
	
	for(j=0; j < 10; j++){
		if((notas[0][j] <= notas[1][j]) && (notas[0][j] <= notas[2][j])){
			pior_1 ++;
		}else if((notas[1][j] <= notas[0][j]) && (notas[1][j] <= notas[2][j])){
			pior_2 ++;
		}else if((notas[2][j] <= notas[0][j]) && (notas[2][j] <= notas[1][j])){
			pior_3 ++;
		}
	}

	printf("%d %d %d\n", pior_1, pior_2, pior_3);

	return 0;
}
