
//2. Write a program in C to sort a given array in ascending order using pointers.
//sort of a bubble sort

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, n, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    int *ptr = arr;
    printf("Elements before sorting:\n");
    for (i=0; i<n; i++)
    {
        printf ("%d  ",arr[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (*(ptr+j) < *(ptr+i))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }

    printf("\nSorted elements of the array:\n");
    for (i=0; i<n; i++)
    {
        printf ("%d  ",arr[i]);
    }

}
