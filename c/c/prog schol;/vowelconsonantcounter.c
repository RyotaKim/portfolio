#include <stdio.h>

int main() {
    char ch;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter characters (press Enter to finish): ");
    
    while ((ch = getchar()) != '\n') {
        
        if (ch >= 'A' && ch <= 'Z') 
            ch += 'a' - 'A';  
        


        switch(ch) {
            case 'a':
                    a++;
                break;
            case 'e':
                    e++;
                break;
            case 'i':
                    i++;
                break;
            case 'o':
                    o++;
                break;
            case 'u':
                    u++;
                break;
            default:
               
                break;
        }
    }
    printf("a = %d\n",  a);
    printf("e = %d\n",  e);
    printf("i = %d\n",  i);
    printf("o = %d\n",  o);
    printf("u = %d\n",  u);

    return 0;
}

// Step 1: Maconvert uppercase to lowercase letters
// Step 2: use if else or switch case to count the vowers
// Step 3: print the expected output.