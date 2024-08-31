#include <stdio.h>

int main() {

    int x = 42;

    int *pX = &x; //* Integer pointer named pX pointing to the address of x
    printf("%d ", *pX);
    printf("%d", x);
    //Now printing the memory address in other line:
    printf("\n%p", pX);

    //Dereferencing the pointer pX to get the value of x and assigning it to y

    int y = *pX; //* integer named y is set to the thing pointed to by pX
    



    return 0;
}