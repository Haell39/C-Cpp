#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[10][50];
    int note[10];
    int i;

    for(i = 0;i<10;i++)
    {
        printf("Enter a name: ");
        scanf("%s", name[i]);
        printf("Enter a note: ");
        scanf("%d", &note[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("%s tirou a nota %d\n", name[i], note[i]);
    }

    
}