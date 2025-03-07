#include <stdio.h>

int main(){
    float miles, gas, aver, pfee, tol, gascost, total;

    printf("Enter the total miles driven per day: ");
    scanf("%f", &miles);
    printf("Enter the cost per gallon of gasoline: ");
    scanf("%f", &gas);
    printf("Enter the Average miles per gallon: ");
    scanf("%f", &aver);
    printf("Enter the parking fees perday: " );
    scanf("%f", &pfee);
    printf("Enter the Tolls per day: ");
    scanf("%f", &tol);

    gascost = ((miles / aver) * gas);
    total = gascost + pfee + tol;

    printf("Total cost per day: %2.f", total);
    
    return 0;
}