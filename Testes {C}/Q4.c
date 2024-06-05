#include <stdio.h>

void ordena(int *v, int n)
{
    int i, j, chave;
    for (i = 1; i < n; i++)
    {
        chave = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > chave)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = chave;
    }
}

int main()
{
    int vetor[10] = {9, 1, 8, 3, 7, 2, 6, 4, 5, 0};
    ordena(vetor, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

