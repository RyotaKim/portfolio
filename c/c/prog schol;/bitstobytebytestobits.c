#include <stdio.h>

int bytetobits(int bytes){
    return bytes * 8;

}

int bitstobytes(int bits){
    return bits / 8;
}

int main(){

        int choice, value;

    
        printf(" [1] Byte to Bits\n [2] Bits to Bytes\n [0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1: 
            printf("Enter the number of bytes: ");
                scanf("%d", &value);
                printf("%d bytes = %d bits\n", value, bytetobits(value));
                break;
            case 2: 
            printf("Enter the number of bits: ");
                scanf("%d", &value);
                printf("%d bits = %d bytes\n", value, bitstobytes(value));
                break;
            case 0: 
                printf("End of program.\n");
                break;
            default:
                printf("Invalid input.");

        }
       

return 0;
}