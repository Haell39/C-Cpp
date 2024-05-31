#include <stdio.h>

// Definição de constantes usando #define
#define PI 3.14159
#define MAX_LENGTH 100

// Constantes usando a palavra-chave const
const int MAX_AGE = 100;
const char NEWLINE = '\n';

int main() {
    // Constantes literais
    int age = 25; // Inteiro
    float radius = 5.5; // Float
    char grade = 'A'; // Caractere
    const char *name = "John Doe"; // String

    // Usando a constante PI definida com #define
    float circumference = 2 * PI * radius;

    // Imprimindo as constantes e variáveis
    printf("Name: %s%c", name, NEWLINE);
    printf("Age: %d%c", age, NEWLINE);
    printf("Grade: %c%c", grade, NEWLINE);
    printf("Radius: %.2f%c", radius, NEWLINE);
    printf("Circumference: %.2f%c", circumference, NEWLINE);

    // Usando a constante MAX_AGE definida com const
    if (age < MAX_AGE) {
        printf("You are younger than %d years old.%c", MAX_AGE, NEWLINE);
    }

    // Usando a constante MAX_LENGTH definida com #define
    char buffer[MAX_LENGTH];
    snprintf(buffer, MAX_LENGTH, "Buffer can hold up to %d characters.", MAX_LENGTH);
    printf("%s%c", buffer, NEWLINE);

    return 0;
}