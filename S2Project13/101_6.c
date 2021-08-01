#include <stdio.h>

int main()
{
    int i,j;
    printf("Pattern1: \n");
    for (i=1;i<=5;i++)
    {
        for (j=6-i;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Pattern2: \n");
    for (i=1;i<=5;i++)
    {
        for (j=5-i;j>0;j--)
        {
            printf("  ");
        }
        for (j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

