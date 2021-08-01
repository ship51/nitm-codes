//10. Write a program to implement bucket sort.

//COMPLETE

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, n, max=0;

    printf("Program 10: Sorting of array using Bucket sort\n");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
        if (max < arr[i])
            max = arr[i];
    }

    printf("Elements before sorting:\n");
    arrprint(arr,n);

    BucketSort(arr,n,max);

    printf("\n\nSorted elements of the array in ascending order:\n");
    arrprint(arr,n);
}

void arrprint(int *arr, int n)
{
    for (int i=0; i<n; i++)
        printf ("%d  ",arr[i]);
    printf("\n\n");
}


void BucketSort(int array[], int n, int range)
{
    int i, j;
    int* count = (int*)malloc((range+1) * sizeof(int));
    for (i = 0; i < range; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        count[array[i]]++;
    }

    printf("Sorting:\n");

    for (i = 0,j = 0; i <= range; i++)
    {
        while(count[i]--)
        {
            array[j++] = i;
            arrprint(array, n);
        }
    }
    free(count);
}
