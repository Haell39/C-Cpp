#include <stdio.h>
#include <math.h>

int main()
{

    //* media aritmetica

    float media1, media2, media, mediasoma;

    media1 = (7 + 8 + 9) / 3.0;
    media2 = (4 + 5 + 6) / 3.0;
    media = (media1 + media2) / 2.0;
    mediasoma = media1 + media2;

    printf("A soma das medias eh" " %.2f\n", mediasoma);

    printf("A media das medias eh: %.2f\n", media);

    return 0;
}
