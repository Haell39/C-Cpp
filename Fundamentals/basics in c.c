#include <stdio.h>
int main()
{

    printf("basics of C:\n");

    // Varaiables

    int n = 10;
    float f = 6.25;
    char letra = 'a';
    char frase[] = "Hellow hollow";
    double n2 = 3.1455428658;

    printf("Values:\n %d\n %0.2f\n %c\n %s\n %.9lf", n, f, letra, frase, n2);

       return 0;
}

//! Float format is {}  %lf  {}