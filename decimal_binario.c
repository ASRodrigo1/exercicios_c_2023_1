#include <stdio.h>


void dec_to_bin(int num){
    if (num > 0){
        dec_to_bin(num/2);
        printf("%d", num%2);
    }
}

int main(){

    int num;
    scanf("%d", &num);
    
    dec_to_bin(num);

    return 0;
}