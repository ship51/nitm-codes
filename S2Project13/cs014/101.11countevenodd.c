#include <stdio.h>

void main()
{
    int n,i,even=0,odd=0,pn=0,nn=0;
    restart:
    printf("Enter the value of n between 0 and 11: ");
    scanf ("%d",&n);
    if (n>11)
    {
        printf ("Number cannot be greater than 11");
        goto restart;
    }
    int a[n];
    printf("Enter %d numbers: \n", n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        if (a[i]==0)
            continue;
        if (a[i]>0)
            pn++;
        else
            nn++;

        if (a[i]%2==0)
            even++;
        else
            odd++;
    }
     printf("Number of positive numbers: \t%d\n", pn);
     printf("Number of negative numbers: \t%d\n", nn);
     printf("Number of even numbers: \t%d\n", even);
     printf("Number of odd numbers: \t\t%d\n", odd);
}
