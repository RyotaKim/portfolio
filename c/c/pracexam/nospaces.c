#include <stdio.h>
#include <ctype.h>

int main(){
char c;

   printf("Enter a stream of characters: ");

    while((c = getchar()) != EOF ){
        if(c == ' '){
            c--;
        }
        printf("%c", c);
    }
    
}