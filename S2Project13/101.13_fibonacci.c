

//program to print first n numbers of the Fibonacci Series
#include <stdio.h>

int main()
{
    int n,a=1,b=1,c,i;
    printf("Enter the value of n to be printed: ");
    scanf("%d", &n);

    printf("The Fibonacci Series: ");
    printf("%d %d ", a, b);
    for (i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}

