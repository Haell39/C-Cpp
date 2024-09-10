#include <stdio.h>

int main()
{
    printf("Learning COnstants in C\n");
    const int mynum = 10; //* mynum will always be 10
    /*
    mynum = 10; //* error
    */

    return 0;


    //! You should always declare the variable as constant when you have values that are unlikely to change:


    const int minutesPerHour = 60;
    const float PI = 3.14;

    //! When you declare a constant variable, it must be assigned with a value:

    //* Like this:

    const int minutesPerHour = 60;

    // *This however, will not work:
    /* 

    const int minutesPerHour;
    minutesPerHour = 60; --> //*ERROR 

    */

    //!  it is considered good practice to declare them with UPPERCASE.

    const int BIRTHYEAR = 1980;





}