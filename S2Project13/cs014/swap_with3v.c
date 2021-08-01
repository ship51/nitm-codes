#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of two variables to swap them: \n");
    printf("Enter the value of a: ");
    scanf ("%d",&a);
    printf("Enter the value of b: ");
    scanf ("%d",&b);
    c=a+b;
    a=c-a;
    b=c-a;
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    return 0;
}
