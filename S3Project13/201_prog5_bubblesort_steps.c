//5. Write a program to implement Bubble sort in C

//COMPLETE

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, n, p=1,temp;
    printf("Program 5: Sorting of array using Bubble sort\n");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    int *ptr = arr;
    printf("Elements before sorting:\n");
    arrprint(arr,n);

    for (i=0; i<n; i++)
    {
        printf("\n\nPass %d:  ",p++);
        for (j=0; j<n-i; j++)
        {
            if (*(ptr+j+1) < *(ptr+j))
            {
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
            arrprint(arr,n);
            printf("    ");
        }
    }

    printf("\n\nSorted elements of the array:\n");
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

