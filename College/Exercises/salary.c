#include <stdio.h>

// code to calculate the final salary based on fixed salary and total sales
// comission is 15% of total sales
// each sale is worth $100

int main() {
    float fixo, sales, salary,commission;
    float comissao = 0.15; // commission rate is 15%
    printf("Enter the fixed salary: ");
    scanf("%f", &fixo);
    printf("Enter the total sales: ");
    scanf("%f", &sales);
    commission = sales * comissao *100; // for each $100 of sales, commission is $15
    salary = fixo + commission;
    printf("The final salary is: R$ %.2f\n", salary);
    return 0;


}