//program to calculate Interest and Amount
#include <stdio.h>

int main()
{
    printf("************PROGRAM TO CALCULATE INTEREST AND AMOUNT************");
    float p,r,t,interest,amount;
    printf("\nEnter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &r);
    printf("Enter time duration (years): ");
    scanf("%f", &t);

    interest = (p*r*t)/100;
    amount = p + interest;
    printf("\nInterest Amount : %0.2f\n", interest);
    printf("\nTotal Amount : %0.2f\n", amount);
    return 0;
}
