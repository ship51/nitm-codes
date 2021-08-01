
/*Implement an algorithm to delete an element in an array of integer
numbers and also implement an algorithm to display the
condition of the array before and after insertion.*/

//program to delete an element in an array
#include <stdio.h>

int main()
{
    int i, n, num, flag=0, pos;
    printf("\nEnter the size of array: ");
    scanf ("%d", &n);
    int a[n];

    printf("Enter %d numbers: \n", n);      //entering n numbers
    for (i=0;i<n;i++)
        scanf("%d", &a[i]);


    printf("\nArray before deletion: \n\n");

    for (i=0;i<n;i++)                          //displaying positions
        printf("  %d ", a[i]);
    printf("\n");

    printf("\nEnter the number to be deleted: ");
    scanf ("%d", &num);

    for (i=0;i<n;i++)
    {
        if (a[i]==num)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if (flag==0)
    {
        printf("\nElement not present in array !! Try Again.\n");
        exit(0);
    }


    for (i=pos;i<n;i++)                     //deleting & swapping
    {
        a[pos]=a[pos+1];
    }
    printf("\nArray after deletion: \n\n");

    for (i=0;i<n-1;i++)
        printf("  %d ", a[i]);

    return 0;
}



