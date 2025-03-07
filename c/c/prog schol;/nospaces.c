#include <stdio.h>

int main() {
    char c;

    printf("Enter a stream of characters (Press Control + C or Control + D if you are done.):\n");

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            printf("%c", c);
        }
    }

    return 0;
}
