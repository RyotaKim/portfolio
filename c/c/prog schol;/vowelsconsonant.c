#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter a stream of characters (press Enter to end):\n");

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}