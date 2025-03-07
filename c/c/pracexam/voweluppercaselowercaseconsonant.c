#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;

    printf("Enter a stream of characters: ");

    while((ch = getchar()) != '\n'){

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
            ch = toupper(ch);
        }
        else{
            ch = tolower(ch);
        }
        printf("%c", ch);
    }
}