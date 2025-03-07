#include <stdio.h>

int main() {
    int arr[10], sum = 0, i;
    float avg;

    printf("Enter 10 integers:\n");

    // Input 10 integers into the array
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / 10;

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    // Odd Numbers
    printf("\nOdd numbers: ");
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
        //Even Numbers
    printf("\nEven numbers: ");
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    // Finding the smallest element
    int smallest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("\nSmallest element: %d\n", smallest);

    // Finding the largest element
    int largest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element: %d\n", largest);

    // Displaying the array in reverse order
    printf("\nArray in reverse order: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Copying the array into another array
    int copy_arr[10];
    for (i = 0; i < 10; i++) {
        copy_arr[i] = arr[i];
    }

    printf("\n\nCopied array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", copy_arr[i]);
    }

    return 0;
}