#include <stdio.h>
#include <stdlib.h>

int main(){

	int a[3] = {1, 2, 3};
	int b[3] = {4, 5, 6};
	int *c = b;
	c += 4;
	*c = 12;
	printf("%d %d %d\n", a);
