#include <stdio.h>

int main(){

    int array[10], sum = 0, i;
    float avg;

    printf("Enter 10 integers:\n");

        for(i = 0; i < 10; i++){
            scanf("%d", &array[i]);
            sum += array[i];
        }
    
            avg = (float)sum/10;
        
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    printf("Odd numbers:\n");
    for(i = 0; i < 10; i++){
        if(array[i] % 2 != 0){
            printf("%d ", array[i]);
        }
    }

    printf("Even Numbers:\n");
    for(i = 0; i < 10; i++){
        if(array[i] % 2 == 0){
            printf("%d ", array[i]);
        }
    }

    int smallest = array[0];
    for(i = 0; i < 9; i++){
        if(array[i]  < smallest){
            smallest = array[i];
        }
    }
    printf("Smallest Element: %d\n", smallest);

    int largest = array[0];
    for(i = 0; i < 10; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    printf("Largest Element: %d\n", largest);

    printf("Array in Reverse Order: ");
    for(i = 9; i >= 0; i--){
        printf("%d ", array[i]);
    }

    int copy_array[10];
    for(i = 0; i < 10; i++){
        copy_array[i] = array[i];
    }

    printf("\nCopied Array: ");
    for(i = 0; i < 10; i++){
        printf("%d ", copy_array[i]);
    }
    
    return 0;
}