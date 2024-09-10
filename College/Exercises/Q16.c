#include <stdio.h>
#include <math.h>
int main()
{

    int x;
    printf("Type any integer number: ");
    scanf("%d", &x);

    if(x > 0){
        printf("You have typed %d", x);
    }

    else if(x < 0){
        printf("The opposite of what you typed is %d", -1 * x);
    }

    else{
        printf("Invalid number");
    }

    return 0;
}