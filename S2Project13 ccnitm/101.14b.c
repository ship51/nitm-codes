
//program to print prime numbers between N1 and N2
#include <stdio.h>

int main()
{
    int n1,n2,j,flag;
    restart:
    printf("Enter N1 & N2 between which Prime numbers are to be obtained (N1<N2): ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n1>n2)
    {
        printf("Try Again !!\n");
        goto restart;
    }

    while (n1!=n2)            //counting from N1 to N2
    {
        flag=0;
        if (n1==1)
        {
            n1++;
            continue;
        }

         //checking for prime
        for (j=2;j<=n1/2;j++)
        {
            if (n1%j==0)
                flag=1;         //the number is not prime if flag=1
        }
        if (flag==0)            //the number is prime if flag=0
            printf("%d ", n1);

        n1++;
    }
    return 0;
}

