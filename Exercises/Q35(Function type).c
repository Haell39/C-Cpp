#include <stdio.h>

int calculateH(int N)
{
    int H = 0;
    for (int i = 1; i <= N; i++)
    {
        H = H + i;
    }

    return H;
}

int main()

{

    int N;
    printf("Type the 'N' number: ");
    scanf("%d", &N);
    int H = calculateH(N);
    printf("H = %d\n", H);

    return 0;
}