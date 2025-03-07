#include <stdio.h>

int main(){
    float princ, rate, days, total;

        printf("Enter the Loan Principal: ");
        scanf("%f", &princ);
        printf("Enter the interest rate: ");
        scanf("%f", &rate);
        printf("Enter the days for several loans: ");
        scanf("%f", &days);

        total = (princ * rate * days) / 365;
         
        printf("The total interest is: %.2f", total);

}