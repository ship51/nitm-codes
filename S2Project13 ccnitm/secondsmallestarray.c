#include <stdio.h>
                    //second smallest of five numbers using arrays
int main()
{
    int a[5], i, j, m;
    printf("Enter five numbers to find out the second smallest: ");
    for (i=0;i<5;i++)
        scanf ("%d", &a[i]);

    for (i=0;i<4;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    printf("The five numbers in ascending order: ");
    for (i=0;i<5;i++)
    {
        printf ("%d ", a[i]);
    }
    printf("\nThe second smallest number of the five numbers: %d",a[1]);

    return 0;
}
