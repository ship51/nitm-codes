//program to display Prime Numbers between 50 & 150
#include <stdio.h>

int main()
{
    int i,j,flag=0;
    printf("Prime numbers between 50 and 150: \n\n");
    for (i=50;i<=150;i++)
    {
        flag=0;
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
                {
                    flag=1;
                    break;
                }
        }
        if (flag==0)
            printf("%d ", i);
    }
    return 0;
}
