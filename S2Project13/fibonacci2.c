#include <stdio.h>

int main()
{
    int n,a,b,c,i;
    printf("Enter n to print first n number of Fibonacci Series: ");
    scanf("%d", &n);
    a=1;
    b=1;
    printf ("%d, %d, ", a,b);
    for (i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf ("%d, ", c);
    }

    return 0;
}
