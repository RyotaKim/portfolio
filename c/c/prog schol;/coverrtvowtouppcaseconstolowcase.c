#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;

    printf("Enter a stream of characters: ");

    while((ch = getchar()) != '\n') {
        if(isalpha(ch))
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        putchar(toupper(ch));
    }
    else{
        putchar(tolower(ch));
    }
}   
 }
    return 0;
}

