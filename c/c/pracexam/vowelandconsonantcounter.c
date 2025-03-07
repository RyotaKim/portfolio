#include <stdio.h>
#include <ctype.h>

int main(){

    int vow = 0, cons = 0;
    char ch;

    printf("Enter a stream of Characters: ");

    while((ch = getchar()) != '\n'){
        if (isalpha(ch)) {
            ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vow++;
        }   
        else{
            cons++;
        }
        
    }
    
}
    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", cons);
}