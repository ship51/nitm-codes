

/*C program to generate n Fibonacci numbers using both recursive and
non-recursive methods.*/

#include <stdio.h>
int main()
{
    int a=1, b=1, n;
    printf("Enter the value of n : ");
    scanf ("%d", &n);
    printf("\nFibonacci series of %d numbers using recursive method:\n %d %d",n,a,b);
    fiboRecursive(a,b,n);
    printf("\nFibonacci series of %d numbers using non-recursive method:\n %d %d",n,a,b);
    fiboNonRecursive(a,b,n);
    return 0;
}

void fiboRecursive (int a, int b, int n)
{
    int c=a+b;
    if (n>2)
    {
        printf(" %d", c);
        n--;
        fiboRecursive(b,c,n);
    }
}
void fiboNonRecursive (int a, int b, int n)
{
    int c;
    while (n>2)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d", c);
        n--;
    }
}
