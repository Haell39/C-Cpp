#include <stdio.h>

int main()
{
    int num, i, result = 0;
    printf("Type a number: ");
    scanf("%i", &num);
    
    for (i = 2; i <= num/2; i++){
        
        if (num % i == 0){
            
            result++;
            break;
        }
    }

    if (result == 0)
        printf("%i it s a prime number", num);
    else 
        printf("%i it s not prime", num);
    return 0;
}
