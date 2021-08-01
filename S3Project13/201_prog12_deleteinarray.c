/* Write a program to delete an element from an array at a position given as an input  */

//multiple occurrences ??

//program to delete an element in an array
#include <stdio.h>

int main()
{
    int i, n, num, flag=0, pos;
    printf("\nProgram 12: Delete an element from an array at a position given as an input \n");
    printf("\nEnter the size of array: ");
    scanf ("%d", &n);
    int a[n];

    printf("Enter %d numbers: \n", n);      //entering n numbers
    for (i=0;i<n;i++)
        scanf("%d", &a[i]);


    printf("\nArray before deletion: \n\n");

    printArr(a, n);

    printf("\nEnter the number to be deleted: ");
    scanf ("%d", &num);

    for (i=0; i<n; i++)
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

    for (i=pos; i<n-1; i++)                     //deleting & swapping
    {
        a[i]=a[i+1];
    }
    printf("\nArray after deletion: \n\n");

    printArr(a, n-1);

    return 0;
}

void printArr(int *a, int n)
{
    for (int i=0; i<n; i++)
        printf(" %d  ", a[i]);
    printf("\n");
}



