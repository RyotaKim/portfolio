#include <stdio.h>


double sum(double a, double b) {
    return a + b;
}
double difference(double a, double b) {
    return a - b;
}
double product(double a, double b) {
    return a * b;
}
double quotient(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    double num1, num2;
    char choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("[+] Sum [-] Difference [*] Product [/] Quotient [x] Exit\n");
    printf("Enter Choice: ");
    scanf(" %c", &choice);

    switch(choice) {
        case '+':
            printf("Sum: %.2lf\n", sum(num1, num2));
            break;
        case '-':
            printf("Difference: %.2lf\n", difference(num1, num2));
            break;
        case '*':
            printf("Product: %.2lf\n", product(num1, num2));
            break;
        case '/':
            printf("Quotient: %.2lf\n", quotient(num1, num2));
            break;
        case 'x':
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
