#include <stdio.h>
#include <string.h>


int main(){
	
	char a[100], b[100], tem;
	unsigned int n=0, len_a, len_b, i, j, qnt=0;
	
	fgets(a, sizeof(a), stdin);
	fgets(b, sizeof(b), stdin);
	
	len_a = strlen(a);
	len_b = strlen(b);
	
	for(i = 0; i < (len_b - len_a + 2); i++){
		tem=1;
		for(j = 0; j < len_a - 1; j++){
			printf("Comparando, %c %c\n", a[j], b[i+j]);
			if(a[j] != b[i + j]){
				tem = 0;
				break;
			}
		}
		if(tem){
			qnt ++;
		}
	}
	

	printf("%d\n", qnt);

	return 0;
}
