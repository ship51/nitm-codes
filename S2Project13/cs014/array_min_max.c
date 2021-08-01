#include <stdio.h>

int main()
{
    int i, min=0,max=0;
    int a[10];
    printf("Enter 10 numbers: ");
    scanf ("%d",&a[0]);
    min=a[0];
    max=a[0];
    for (i=1;i<10;i++)
    {
        scanf ("%d",&a[i]);
        if (a[i]<min)
            min=a[i];
        if (a[i]>max)
            max=a[i];
    }
    printf("Greatest of 10 numbers: %d\n",max);
    printf("Smallest of 10 numbers: %d",min);
    return 0;
}
