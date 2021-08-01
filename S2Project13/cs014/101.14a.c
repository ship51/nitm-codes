
//program to print first n prime numbers
#include <stdio.h>

int main()
{
    int n,i=2,j,count=0,flag;
    printf("Enter the number of Prime numbers to be printed: ");
    scanf("%d", &n);

    while (count!=n)            //counting until we get n Prime numbers
    {
        flag=0;
         //checking for prime
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
                flag=1;         //the number is not prime:flag=1
        }
        if (flag==0)            //prime if flag=0
        {
            count++;
            printf("%d ", i);
        }
        i++;
        if (count==n)
            break;

    }
    return 0;
}

