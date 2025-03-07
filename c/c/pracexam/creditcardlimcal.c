#include <stdio.h>


int main(){

    float  beginbal, talcharge, talcred, credlim, bal;
    int accnumber;

    printf("Enter Account Number: ");
    scanf("%d", &accnumber);

    printf("Enter beginning balance: ");
    scanf("%f", &beginbal);

    printf("Enter total charges: ");
    scanf("%f", &talcharge);

    printf("Enter total credits: ");
    scanf("%f", &talcred);

    printf("Enter Credit Limit: ");
    scanf("%f", &credlim);

    printf("Account Number: %d\n", accnumber);
    printf("Credit Limit: %.2f\n", credlim);

    bal = beginbal + talcharge - talcred;

    printf("Balance: %.2f\n", bal);

    if(bal > credlim){
        printf("Credit Limit Exceeded.");
    }



return 0;

    
}