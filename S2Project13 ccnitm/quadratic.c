#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    double D,x1,x2;
    printf("Enter the values of a, b and c to calculate roots: \n");
    scanf ("%d%d%d",&a,&b,&c);
    D=sqrt(b*b - 4*a*c);
    if (D>0)
    {


    }
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
