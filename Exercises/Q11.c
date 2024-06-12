#include <stdio.h>
#include <math.h>

int main()
{
    float vbuy, vpay, troco;

    printf("Informe o valor da compra: ");
    scanf("%f", &vbuy);

    printf("Informe o valor pago pelo cliente: ");
    scanf("%f", &vpay);

    if (vbuy > vpay)
    {
        troco = vbuy - vpay;
        printf("O troco do cliente será de: %d", troco);
    }

    else if (vbuy < vpay)
    {
        printf("Valor insuficiente seu pobre");
    }
    

    return 0;
}
