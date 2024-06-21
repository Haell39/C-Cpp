#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite 2 numeros naturais: \n");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("Os valore sao iguais");
    }

    else if(a > b){
        printf("Os valores sao diferentes, %d eh maior que %d", a, b);
    }
    else if(b > a){
        printf("Os valores sao diferentes, %d eh maior que %d", b, a);
    }

    else{
        printf("You have typed shit");
    }

    return 0;
}
