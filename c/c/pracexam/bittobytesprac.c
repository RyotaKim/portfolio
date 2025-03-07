#include <stdio.h>

int bytetobits(int bytes){
    return bytes * 8;}
int bittobytes(int bits){
    return bits / 8;
}

int main(){

    int ch, val;

    
    printf("[1] Bytes to Bits: \n[2] Bits to Byte \n[0] Cancel the program:  ");
    scanf("%d", &ch);
    printf("Enter a value: ");
    scanf("%d", &val);

    switch (ch)
    {
    case 1: printf("%d bytes = %d bits", val, bytetobits(val));       
        break;
    case 2: printf("%d bits = %d bytes", val, bittobytes(val));
        break;
    case 0: printf("End of Program.");
        break;
    default:printf("Invalid Input.");
        break;
    }
    return 0;
}
