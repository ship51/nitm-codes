//6. Write a program to implement selection sort on an input set of numbers
//in ascending order in an array.
//COMPLETE

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, n, min, temp;
    printf("Program 6: Sorting of array using Selection sort\n");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }

    int *ptr = arr;

    printf("Elements before sorting:  ");
    arrprint(arr,n);

    for (i=0; i<n-1; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (*(ptr+j) < *(ptr+min))
                min = j;
        }
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+min);
        *(ptr+min) = temp;

        printf("\n\nPass %d:  ", i+1);
        arrprint(arr,n);
    }

    printf("\n\nSorted elements of the array in ascending order:  ");
    arrprint(arr,n);

}

void arrprint(int *arr, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d  ",arr[i]);
    }
}
