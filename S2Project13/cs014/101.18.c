
/*Implement an algorithm to insert an element at any arbitrary position
in an array of integer numbers and also implement an algorithm to
display the condition of the array before and after insertion.*/

//program to insert an element in an array
#include <stdio.h>

int main()
{
    int i, n, num, pos;
    printf("\nEnter the size of array: ");
    scanf ("%d", &n);
    int a[n+1];

    printf("Enter %d numbers: \n", n);      //entering n numbers
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray before insertion: \n\n");

    for (i=0;i<n;i++)                          //displaying positions
        printf("  %d ", a[i]);
    printf("\n");

    printf("\nEnter the number to be inserted: ");
    scanf ("%d", &num);

    printf("\nEnter the position at which the number is to be inserted: ");
    scanf ("%d", &pos);
    if (pos<0 || pos>n-1)
    {
        printf("\nInvalid position !! Try Again.\n");
        exit(0);
    }

    for (i=n+1;i>pos;i--)                     //inserting & swapping
    {
        a[i]=a[i-1];
    }
    a[pos]=num;
    printf("\nArray after insertion: \n\n");

    for (i=0;i<=n;i++)
        printf("  %d ", a[i]);

    return 0;
}


