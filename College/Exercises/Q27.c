#include <stdio.h>

int main()
{

    //* vamos ve os quadrados dos numeros entre 15 e 30

    for (int i = 16; i < 30; i=i+1){
        
        printf("%d^2 = %d\n", i, i*i); //* tbm é possivel printar assim: printf("%d ", i*i);
    }

    

    return 0;
}