
//program to sort n numbers in ascending order
#include <stdio.h>

int main()
{
    int i, j, n, min;
    printf("Enter the size of array: ");
    scanf ("%d", &n);
    int a[n];
    printf("Enter %d numbers: \n", n);
    for (i=0;i<n;i++)
    {
        scanf ("%d", &a[i]);
    }
    for (i=0;i<n-2;i++)
    {
        min = i;
        for (j=i+1;j<n;j++)
        {
            if (a[min]>a[j])
                min = j;
        }
            printf("\n\n\n %d", a[min]);
            printf("\n %d", a[i]);
            a[min]=a[min]+a[i];
            a[i]=a[min]-a[i];
            a[min]=a[min]-a[i];
            printf("\n %d", a[min]);
            printf("\n %d", a[i]);
    }
    printf("Array in ascending order: ");
    for (i=0;i<n;i++)
    {
        printf ("%d ", a[i]);
    }
    return 0;
}
