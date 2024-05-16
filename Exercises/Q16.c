
#include <stdio.h>

int main(){
    int num;

    printf("Type an Integer number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d\n", num);
    } else if (num < 0){
        printf("%d\n", -num);
    }

    return 0;
}

