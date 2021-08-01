#include <stdio.h>

int main()
{
    int i,max=0,min=0;
    int a[10];
    printf("Enter 10 numbers: ");
    for (i=0;i<10;i++)
    {
        scanf ("%d",&a[i]);
        if (i==0)
        {
            max=a[i];min=a[i];
        }
        if (max<a[i])
            max=a[i];
        if (min>a[i])
            min=a[i];
    }
     printf("Maximum of the 10 numbers: %d\n", max);
     printf("Minimum of the 10 numbers: %d", min);
    return 0;
}
