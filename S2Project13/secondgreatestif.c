#include <stdio.h>
                    //second smallest of five numbers using if statement

int main()
{
    int a,b,c,d,e,ss;
    printf("Enter five numbers to find out the second smallest: ");
    scanf ("%d %d %d %d %d", &a,&b,&c, &d,&e);

    if (a<b)
    {
        if (a<c)
            {
                if (a<d)
                {
                    if (a<e)
                        printf("%d is the smallest among the three.", a);
                    else
                        printf("%d is the smallest among the three.", e);
                }
                else
                {
                    if (d<e)
                        printf("%d is the smallest among the three.", d);
                    else
                        printf("%d is the smallest among the three.", e);
                }
            }


    }
    else
    {
        if (b<c)
            printf("%d is the smallest among the three.", b);
        else
            printf("%d is the smallest among the three.", c);
    }
    return 0;
}
