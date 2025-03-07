#include <stdio.h>

int main(){
    int array1 [3][4];
    int sum = 0, average, i = 0, j = 0;

    printf("Input 12 values: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &array1[i][j]);
            sum += array1[i][j];
        }
    }
    printf("The number input are:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%5d", array1[i][j]);
        }
        printf("\n");
    }

    printf("The sum is: %d\n", sum);

    average = sum/12;
    printf("The Average is: %d\n", average);

    printf("Odd numbers are: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            if(array1[i][j] % 2 != 0){
                printf("%d ", array1[i][j]);
            }
        }
    }
    printf("\nEven numbers are: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            if(array1[i][j] % 2 == 0){
                printf("%d ", array1[i][j]);
            }
        }
    }
    
    int small;
    small = array1[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; i++){
            if(array1[i][j] < small)
                small = array1[i][j];
            
        }
    }
        printf("\nSmallest Element: %d", small);

    int large;
    large = array1[0][0];
    for(i = 0; i < 3; i++){
        for(j ; j < 4; j++){
            if(array1[i][j] > large);
            large = array1[i][j];
        }
    }
    printf("\nLargest Element: %d\n", large);

    printf("Array in Reverse: \n");

    for(i = 2; i >= 0; i--)
    {
        for(j = 3; j >= 0; j--)
            {
            printf("%5d", array1[i][j]);
            }
        printf("\n");
    }

    int copy[i][j];
    for(i = 0; i < 3; i++){
        for(i = 0; i < 4; i++){
            copy[i][j] = array1[i][j];
        }
    }
    printf("Copied Array:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%5d", copy[i][j]);
        }
        printf("\n");
    }
    
}