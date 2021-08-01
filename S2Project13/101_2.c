#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number to check weather it is positive/negative or odd/even: ");
    scanf ("%d",&a);
    if (a==0)
        printf("The number is zero.");
    else if (a>0)
    {
        if (a%2==0)
            printf("%d is positive and even.", a);
        else
            printf("%d is positive and odd.", a);
    }
    else
    {
        if (a%2==0)
            printf("%d is negative and even.", a);
        else
            printf("%d is negative and odd.", a);
    }
    return 0;
}
