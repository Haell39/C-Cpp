#include <stdio.h>
#include <math.h>
#define PI 3.14159

float areacirculo(float raio)
{

    return PI * raio * raio;
}

int main()
{

    float raio;
    printf("Digite o raio: ");
    scanf("%f", &raio); //& é o endereço de memória da variável, precisa ser usado para passar o valor
    float area = areacirculo(raio);
    printf("A area do circulo digitado é: %0.2f\n", area); //\n é para pular uma linha

    // printf("A area do circulo digitado é: %f", areacirculo(raio));
    // Imprime a área do círculo, mas não é necessário calcular novamente a área, pois ela já foi calculada na linha acima
}
