#include <stdio.h>

int main()
{
    //memory = an array of bytes within RAM (street)
    //memory block = a single unit(byte) within memory, used to hold some value(person)
    //memory address = the address of where a memory block is located(house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    short d = 'J';
    short e = 'K';

    int f = 1;
    double g = 3.14;

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));

    printf("%p\n", &d);
    printf("%p\n", &e);

    printf("%d bytes\n", sizeof(f));
    printf("%d bytes\n", sizeof(g));

    printf("%p\n", &f);
    printf("%p\n", &g);



    return 0;


}