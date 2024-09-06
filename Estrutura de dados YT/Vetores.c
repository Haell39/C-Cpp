#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Char como uma string
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s ", name);

    //Declarando um vetor de string
    int abc[30];//Vetor de 30 inteiros
    float test[15];//Vetor de 15 floats
    
    char names [10][50]; //*Vetor de 10 strings com 50 caracteres:

    //*Inserindo valores fixos no vetor:

    //Preenchimento manual:
    int notes[5];

    notes[0] = 80;
    notes[1] = 90;
    notes[2] = 50;
    notes[3] = 65;
    notes[4] = 80;

    //Preenchimento automatico:
    int notes2[5] = {80, 90, 50, 65, 80};

    //preenchimento pelo usuário:
    int notes3[5];
    printf("Enter your first note: ");
    scanf("%d", &notes3[0]);
    printf("Enter your second note: ");
    scanf("%d", &notes3[1]);
    printf("Enter your third note: ");
    scanf("%d", &notes3[2]);
    printf("Enter your fourth note: ");
    scanf("%d", &notes3[3]);
    printf("Enter your fifth note: ");
    scanf("%d", &notes3[4]);



    return 0;
}