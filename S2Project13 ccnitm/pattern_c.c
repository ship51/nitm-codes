#include <stdio.h>
                    //pattern_c

                    /*____*_
                      ___*_*_
                      __*_*_*_
                      _*_*_*_*_
                      *_*_*_*_*_
                    */

void main()
{
    int i, j, k;
    for (i=1;i<=5;i++)
    {
        for (j=4;j>=i;j--)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
