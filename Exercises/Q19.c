
#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Type  3 Integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d eh o maior", a);
    }
    else if (b > a && b > c)
    {
        printf("%d eh o maior", b);
    }
    else if (c > a && c > b)
    {
        printf("%d eh o maior", c);
    }
    else if(a = b = c){
        printf("numeros iguais");
    }

    else{
        printf("Invalid numbers");
    }

    return 0;
}
