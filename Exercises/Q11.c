#include <stdio.h>
#include <math.h>

int main()
{
    float vbuy, vpay, troco;

    printf("Informe o valor da compra: ");
    scanf("%f", &vbuy);

    printf("Informe o valor pago pelo cliente: ");
    scanf("%f", &vpay);

    if (vpay < 0)
    {
        printf("Valor invalido");
    }

    else if (vpay > vbuy)
    {
        troco = vpay - vbuy;
        printf("Seu troco eh %.2f", troco);
    }

    else if (vpay == vbuy)
    {
        printf("Seu troco eh 0");
    }

    else
    {
        printf("Valor insuficiente");
    }

    //* apresentação do troco em cedulas(menores possiveis):

    //* 200, 100, 50, 20, 10, 5, 2;

    







    

    return 0;
}
