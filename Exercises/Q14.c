#include <stdio.h>
int main(){

    int x;

    printf("digite um numero: ");
    scanf("%d", &x);

    if(x > 0){
        printf("positivo");
    }

    else if(x < 0){
        printf("negativo");
    }

    else{
        printf("neutro");
    }

    return 0;
}