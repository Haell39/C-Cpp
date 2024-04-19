#include <stdio.h>
int main()
{

    int i, j;
    for (i = 1, j = 10; i <= 5 && j >= 6; i++, j--)
    {
        printf("%d %d\n", i, j);
    }


   
    return 0;
}