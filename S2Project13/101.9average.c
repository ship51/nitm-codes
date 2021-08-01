#include <stdio.h>

int main()
{
    int n,i;
    double avg,sum=0;
    printf("Enter the value of n: ");
    scanf ("%d",&n);
    int a[n];
    printf("Enter %d numbers: ", n);
    for (i=0;i<=n-1;i++)
    {
        scanf ("%d",&a[i]);
        sum=sum+a[i];
    }
    avg = sum/n;
     printf("Average of %d numbers: %lf", n, avg);
    return 0;
}
