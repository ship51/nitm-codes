#include <stdio.h>

int main()
{
    int n,i,f=0;
    printf("Enter a number to check whether it is Prime or not: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        if (n%i==0)
            f++;
    }
    if (f==2)
        printf("%d is a Prime number. \n", n);
    else
        printf("%d is a not Prime number. \n", n);
    return 0;
}
