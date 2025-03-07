#include<stdio.h> 

float intocm(float inches){
    return inches * 2.54;
}

int main() {
    float inches, cm;

    printf("Enter the length in inches: ");
    scanf("%f", &inches);

    cm = intocm(inches);

    printf("%.2f inches is equal to %.2f centimetes.\n", inches, cm);

    return 0;
}