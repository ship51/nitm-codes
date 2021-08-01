#include <stdio.h>
                    //second smallest of five floating numbers using arrays
int main()
{
    float a[5], m;
    int i, j;
    printf("Enter five numbers to find out the second smallest: ");
    for (i=0;i<5;i++)
        scanf ("%f", &a[i]);

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
        printf ("%f ", a[i]);
    }
    printf("\nThe second smallest number of the five numbers: %f",a[1]);

    return 0;
}
