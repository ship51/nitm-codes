
//program to print numbers which are not prime between N1 and N2
#include <stdio.h>

int main()
{
    int n1,n2,j,flag;
    restart:
    printf("Enter N1 & N2 between which non-Prime numbers are to be obtained (N1<N2): ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n1>n2)
    {
        printf("Try Again !!\n");
        goto restart;
    }

    while (n1!=n2)            //counting until we get n Prime numbers
    {
        flag=0;
        //checking for prime
        for (j=2;j<=n1/2;j++)
        {
            if (n1%j==0)
                flag=1;         //the number is not prime
        }
        if (flag==1)
            printf("%d ", n1);
        n1++;
    }
    return 0;
}

