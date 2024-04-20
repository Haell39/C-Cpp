#include <stdio.h>
#include <stdlib.h>
int main()
{

    //? Switch case its for multiple conditions and fixed values, for conditions use if, else if, else!

    //* Example 1:

    int day;
    printf("Enter a day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
    }

    //* Example 2:

    int mes;
    printf("Type a number 1 a 6:");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("march\n");
        break;
    case 4:
        printf("april\n");
        break;
    case 5:
        printf("may\n");
        break;
    case 6:
        printf("june\n");
        break;

    default:
        printf("Invalid month");
        break;
    }

    return 0;
}
