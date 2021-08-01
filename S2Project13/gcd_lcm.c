#include <stdio.h>

int main()
{
    int a,b,i=1,gcd,lcm;
    printf("Enter two numbers a and b to find GCD and LCM: \n");
    printf("Enter the value of a: ");
    scanf ("%d",&a);
    printf("Enter the value of b: ");
    scanf ("%d",&b);
    while (i<=a && i<=b)
    {
        if (a%i==0 && b%i==0)
            gcd =i;
        i++;
    }
    lcm=(a*b)/gcd;
    printf("GCD of %d & %d: %d\n", a,b,gcd);
    printf("LCM of %d & %d: %d\n", a,b,lcm);
    return 0;
}
