#include <stdio.h>

int main()
{
    int a,b,i,gcd,lcm;

    printf("Enter two numbers to find GCD and LCM: \n");
    scanf ("%d",&a);
    scanf ("%d",&b);

    for (i=1;i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
            gcd = i;
    }
    printf ("\nGreatest Common Divisor: %d",gcd);
    printf ("\nLowest Common Multiple: %d", ((a*b)/gcd));
    return 0;
}

