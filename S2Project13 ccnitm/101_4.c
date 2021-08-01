#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers to find out the greatest: ");
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);

    if (a>b)
    {
        if (a>c)
            printf("%d is the greatest among the three.", a);
        else
            printf("%d is the greatest among the three.", c);
    }
    else
    {
        if (b>c)
            printf("%d is the greatest among the three.", b);
        else
            printf("%d is the greatest among the three.", c);
    }
    return 0;
}
