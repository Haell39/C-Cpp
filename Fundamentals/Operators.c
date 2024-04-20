#include <stdio.h>
int main()
{

    //* Assignment Operators

    int a = 10;
    int b = 5;
    a += b; // a = a + b
    a -= b; // a = a - b
    a *= b; // a = a * b
    a /= b; // a = a / b
    a %= b; // a = a % b


    //! more operators:


    int c = 10;
    int d = 5;
    c &= d; // c = c & d
    c |= d; // c = c | d
    c ^= d; // c = c ^ d
    c <<= 2; // c = c << 2
    c >>= 2; // c = c >> 2
    c >>= 2; // c = c >> 2


    //* Comparison Operators
    int x = 10;
    int y = 5;
    x == y; // x = x == y
    x != y; // x = x != y
    x > y; // x = x > y
    x < y; // x = x < y
    x >= y; // x = x >= y
    x <= y; // x = x <= y

    //* Logical Operators
    int z = 10;
    int w = 5;
    z && w; // z = z && w  --  {} E {}
    z || w; // z = z || w  --  {} OU {}
    !z; // z = !z          --  {} NAO {}

       return 0;
}

