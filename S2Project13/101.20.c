
/*C program to reverse the elements in an array of
integer numbers and also implement a program to display
the condition of the array before and after reversal.*/

//program to reverse the elements in an array
#include <stdio.h>

int main()
{
    int i, n;
    restart:
    printf("\nEnter the size of array: ");
    scanf ("%d", &n);
    int a[n];
    if (n<1)
    {
            printf("Invalid size !! Try Again.");
            goto restart;
    }

    printf("Enter %d numbers: \n", n);      //entering n numbers
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nBefore reversal:");
                                                  //before reversal
    for (i=0;i<n;i++)
    {
        printf(" %d,", a[i]);
    }
                                            //interchanging elements
    for (i=0;i<n/2;i++)
    {
        a[i]=a[i]+a[n-1-i];
        a[n-1-i]=a[i]-a[n-1-i];
        a[i]=a[i]-a[n-1-i];
    }

    printf("\n\nAfter reversal:");

    for (i=0;i<n;i++)                          //displaying positions
    {
        printf(" %d,", a[i]);
    }
    return 0;
}


