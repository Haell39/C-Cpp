//* Pessoas maiores de idade

#include <stdio.h>

int main()
{
    int age;
    int count = 0;
    printf("Digite a idade das 10 pessoas: \n");
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &age);
        if(age >= 18){
            count++;
        }
    }
    printf("A quantidade de pessoas maiores de idade eh: %d\n", count);

    return 0;
}
