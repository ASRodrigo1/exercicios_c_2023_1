#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float matriz[5][3], soma=0;
    int linha, coluna, i, j;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    scanf("%d %d", &linha, &coluna);
    
    float *p_linha = (float *) matriz[linha];
    float *p_coluna = (float *) matriz[0];
    
    //soma na linha
    for(i = 0; i < 3; i++){
        soma += p_linha[i];
    }
    
    //soma na coluna
    for(i = coluna; i < 15; i+=3){
        soma += p_coluna[i];
    }
    
    printf("%.2f", soma);
    
    return 0;
}