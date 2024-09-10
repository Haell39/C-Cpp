#include <stdio.h>

int main()
{
    int x;
    printf("type any integer number: ");
    scanf("%d", &x);

    if(x == 0){
        printf("You have typed zero");
    }

    else if(x % 2 == 1){
        printf("this number is odd");
    }

    else if(x % 2 == 0){
        printf("This number is even");
    }

    else{
        printf("invalid number");
    }


    return 0;
}