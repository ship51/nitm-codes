#include <stdio.h>
                        //incomplete
int main()
{
    int n,i,j,f=0,np=0;
    printf("Enter the value of n to print first n Prime Numbers: ");
    scanf("%d",&n);
    printf("First n Prime Numbers: ");
    while (np<=n)
    {
        for (;i>0;i++)
        {
            f=0;
            for(j=1;j<=i;j++)
            {
                if (i%j==0)
                    f++;
            }
            if (f==2)
            {
                printf ("%d, ",i);
                np++;
            }
        }

    }
    return 0;
}
