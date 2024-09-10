#include <stdio.h>

int main()
{

    //* Vetor ou Array

    
    //vetor é uma estrutura de dados que permite armazenar um conjunto de elementos de mesmo tipo
    //no caso, elementos de tipo int
    int vetor[5]; //declara um vetor chamado vetor com 5 elementos do tipo int
    
    //para acessar um elemento de um vetor, é necessário especificar o indice do elemento
    //o indice começa de 0
    vetor[0] = 10; //armazena o valor 10 no primeiro elemento do vetor
    vetor[1] = 20; //armazena o valor 20 no segundo elemento do vetor
    vetor[2] = 30; //armazena o valor 30 no terceiro elemento do vetor
    vetor[3] = 40; //armazena o valor 40 no quarto elemento do vetor
    vetor[4] = 50; //armazena o valor 50 no quinto elemento do vetor
    
    //para imprimir os valores armazenados em um vetor, é necessário fazer um loop
    //para cada elemento do vetor, acessar o valor armazenado no elemento e imprimir
    for(int i=0; i<5; i++){
        printf("O valor armazenado no %d° elemento do vetor e: %d\n", i, vetor[i]);
    }
    
    //para acrescentar um elemento em um vetor já declarado, é necessário realocar o vetor
    //e copiar os elementos antigos para o novo vetor com tamanho maior
    int vetor_acrescentado[10];
    for(int i=0; i<5; i++){
        vetor_acrescentado[i] = vetor[i];
    }
    vetor_acrescentado[5] = 60; //armazena o valor 60 no sexto elemento do vetor acrescentado
    vetor_acrescentado[6] = 70; //armazena o valor 70 no sétimo elemento do vetor acrescentado
    vetor_acrescentado[7] = 80; //armazena o valor 80 no oitavo elemento do vetor acrescentado
    vetor_acrescentado[8] = 90; //armazena o valor 90 no nono elemento do vetor acrescentado
    vetor_acrescentado[9] = 100; //armazena o valor 100 no décimo elemento do vetor acrescentado
    
    //para imprimir os valores armazenados em um vetor, é necessário fazer um loop
    //para cada elemento do vetor, acessar o valor armazenado no elemento e imprimir
    for(int i=0; i<10; i++){
        printf("O valor armazenado no %d° elemento do vetor acrescentado e: %d\n", i, vetor_acrescentado[i]);
    }
    



    return 0;
}