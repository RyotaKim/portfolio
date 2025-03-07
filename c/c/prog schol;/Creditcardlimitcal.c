#include <stdio.h>
#include <conio.h>

int main(){
    float sales;
    int x, y;
    
    clrscr();
    
    for (x = 8; x <= 18; x++){
        gotoxy(19, x); 
        printf("|");
    }    
    for (y = 8; y <= 18; y++){
        gotoxy(59, y);
        printf("|");
    }   
    gotoxy(20, 8);
    printf("----------------------------------------");
    gotoxy(20, 18);
    printf("----------------------------------------");
    gotoxy(26, 12);
    printf("Enter the Accumulated Sale:  ");
    gotoxy(30, 13);
    scanf("%f", &sales); 
    gotoxy(27, 14);
    printf("The Salary is %.2f", ((sales / 100) * 9) + 200); 
    getch();

    return 0;
}
