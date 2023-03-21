#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Dado{
    int x;
    float y;
    double z;
    char nome[50];
    int matriz[3][3];
};


int main(){

    printf("%ld %ld %ld %ld %ld\n", sizeof(int), sizeof(float), sizeof(double), sizeof(char), sizeof(bool));

    /*
    int i, j;
    struct Dado dado;

    strcpy(dado.nome, "Joaquim");
    dado.x = 13;
    dado.y = 14.5;
    dado.z = 14.5;

    FILE *arquivo = fopen("test.txt", "w");

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            dado.matriz[i][j] = i*j;
            printf("%d ", i*j);
            fprintf(arquivo, "%d ", i*j);
        }
        printf("\n");
        fprintf(arquivo, "\n");
    }
    
    fclose(arquivo);
    */

    return 0;
}