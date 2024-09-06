#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //Preenchimento vetor com laço de repeticão:

    int notes4[5];
    int i; //*Variável de controle

    for (i = 0; i<5; i++) {
        printf("Enter the note: ");
        scanf("%d", &notes4[i]);
    }
    for (i=0;i<5;i++){
        printf("Your Notes: %d\n", notes4[i]);
    }
}