#include <stdio.h>

int main()
{
    int a[5],i,j,min;
    printf("Enter five numbers to find out the second smallest: \n");
    for (i=0;i<5;i++)
    {
        scanf ("%d",&a[i]);
    }

    for (i=0;i<4;i++)
    {
        min=i;
        for (j=i+1;j<5;j++)
        {
            if (a[min]>a[j])
            {
                min=j;
            }
        }
        a[i]=a[i]+a[min];
        a[min]=a[i]-a[min];
        a[i]=a[i]-a[min];
    }
    printf("Numbers in ascending order: ");
    for (i=0;i<5;i++)
    {
        printf ("\n%d",a[i]);
    }
    printf ("\nSecond smallest number: %d",a[1]);
    return 0;
}

