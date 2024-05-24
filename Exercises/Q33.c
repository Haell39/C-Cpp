#include <stdio.h>

int main()
{
    //* Numeros par entre 13 e 73

    int soma = 0;

    for (int i = 13; i <= 73; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            soma += i; //* isso é o mesmo que: soma = soma + i
        }
    }

    printf("Soma dos numeros par desta sequencia: %d\n", soma);

    return 0;
}

//? Explicando soma = soma + i

/*


Variável Inicial: No início, temos uma variável soma que foi inicializada com o valor 0. Esta variável será usada para armazenar a soma dos números pares.

c
Copiar código
int soma = 0;
//* Looping pelos Números: Usamos um loop for para passar por todos os números de 13 a 73.

c
Copiar código
for(int i = 13; i <= 73; i++)
//* Verificação se o Número é Par: Dentro do loop, verificamos se o número atual i é par.

c
Copiar código
if(i % 2 == 0)
//* Adicionando o Número Par à Soma: Se o número i for par, usamos soma += i; para adicionar o valor de i à variável soma.

//* Exemplo Prático
Vamos ver como isso funciona com alguns valores:

Início: soma é 0.

Primeiro Número Par: i é 14 (porque 13 é ímpar).

soma += i; é o mesmo que soma = soma + i;
soma = 0 + 14
Agora, soma é 14.
Próximo Número Par: i é 16.

soma += i; é o mesmo que soma = soma + i;
soma = 14 + 16
Agora, soma é 30.
Continua: Este processo continua até que o loop tenha passado por todos os números até 73.

//* Visualização da Soma
Para visualizar melhor, aqui está um exemplo simplificado de como a soma se acumula:

Iteração 1: i é 14 (par)

soma = 0 + 14 -> soma é 14
Iteração 2: i é 16 (par)

soma = 14 + 16 -> soma é 30
Iteração 3: i é 18 (par)

soma = 30 + 18 -> soma é 48
...

Última Iteração: i é 72 (par)

soma = ... + 72
No final do loop, a variável soma terá a soma de todos os números pares entre 13 e 73.


*/