#include <stdio.h>

int main()
{
    //? Função "GETS"

    //*A função gets é usada para ler uma linha de texto de entrada padrão (geralmente o teclado) até encontrar um caractere de nova linha (\n). No entanto, ela tem alguns problemas sérios de segurança, o que fez com que fosse desaconselhada e eventualmente removida do padrão C11.

    char str[100];
    printf("Digite uma linha de texto: ");
    gets(str);
    printf("Voce digitou: %s\n", str);

    //! Problema do GETS:

    //* Falta de verificação de limite: gets não tem como saber o tamanho do buffer para onde está lendo os dados. Se o usuário digitar mais caracteres do que o buffer pode armazenar, isso pode causar um estouro de buffer, resultando em comportamento indefinido ou falhas de segurança.

    //? Função "FGETS"

    //* A função fgets é uma alternativa mais segura para ler strings em C. Ela permite especificar o tamanho do buffer, prevenindo estouros de buffer. Além disso, fgets pode ler de qualquer stream, não apenas da entrada padrão.

    // char str[100]; ja esta declarado acima
    printf("Digite uma linha de texto: ");
    fgets(str, sizeof(str), stdin);
    printf("Voce digitou: %s\n", str);

    //? Como "FGETS" funciona:

    /*

    (*) Protótipo: char *fgets(char *str, int n, FILE *stream);
    (*) str: O buffer onde a string lida será armazenada.
    (*) n: O tamanho do buffer (incluindo o caractere nulo de terminação).
    (*) stream: O stream de onde os dados serão lidos. stdin é o stream padrão para entrada de teclado.

    (*) Diferenças principais entre gets e fgets:
    *Segurança: fgets é mais segura porque permite especificar o tamanho do buffer.

    *Inclusão de nova linha: fgets inclui o caractere de nova linha (\n) na string lida, se houver espaço suficiente no buffer. gets remove o caractere de nova linha.

    */

    //? Exemplo Prático Comparando gets e fgets

    //*Com "gets"

    char str2 [10];
    printf("Digite uma linha de texto: ");
    gets(str2); //! Potencial estouro de buffer se o usuário digitar mais caracteres do que o buffer pode armazenar
    printf("Voce digitou: %s\n", str2);
    printf("O tamanho da string digitada: %d\n", strlen(str2));
    printf("O tamanho da string digitada: %d\n", sizeof(str2));

    //*Com "fgets"

    printf("Digite uma linha de texto: ");
    fgets(str2, sizeof(str2), stdin); //? Segurança: fgets não permite especificar o tamanho do buffer, ou seja, nao havera estouro de buffer
    printf("Voce digitou: %s\n", str2);


    return 0;
}


//* Em resumo, use sempre fgets em vez de gets para ler strings em C, pois fgets é mais segura e evita problemas de estouro de buffer.