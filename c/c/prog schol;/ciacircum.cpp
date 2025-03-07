#include <stdio.h>

int main(){
    float pi = 3.14159;
    float are, diam, circum;
    float r;

    printf("Enter the radius: ");
    scanf("%f", &r);

    are = pi * ( r * r);
    diam = 2 * r;
    circum = 2 * pi * r;

    printf("The Diameter of the Circle is: %.2f\n", diam);
    printf("The Circumference of the Circle is: %.2f\n", circum);
    printf("The Area of the Circle is : 5.2f\n", are);
}