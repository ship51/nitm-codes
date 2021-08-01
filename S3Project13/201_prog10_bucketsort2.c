//10.2 Write a program to implement bucket sort.

//COMPLETE

#include <stdio.h>
#include <stdlib.h>

struct bucket
{
    int count;
    int* value;
};

void selectionSort(int *array, int n)
{
    int i, j, temp, min;
    for (i=0; i<n-1; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}


void bucketSort(int array[],int n)
{
    struct bucket buckets[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        buckets[i].count = 0;
        buckets[i].value = (int*)malloc(sizeof(int) * n);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            buckets[0].value[buckets[0].count++] = array[i];
        }
        else if (array[i] < 10)
        {
            buckets[1].value[buckets[1].count++] = array[i];
        }
        else
        {
            buckets[2].value[buckets[2].count++] = array[i];
        }
    }
    for (k = 0, i = 0; i < 3; i++)
    {
        //using selection sort to sort the elements of each bucket
        selectionSort(buckets[i].value, buckets[i].count);
        for (j = 0; j < buckets[i].count; j++)
        {
            array[k + j] = buckets[i].value[j];
        }
        k += buckets[i].count;
        printf("\nBucket %d: ", i+1);
        arrprint(buckets[i].value, buckets[i].count);
        free(buckets[i].value);
    }
}

void main()
{
    int i, j, n;
    printf("Program 10: Sorting of array using Bucket sort\n");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&array[i]);
    }

    i = n;
    printf("Elements before Sorting: ");
    arrprint(array, i);

    bucketSort(array, n);

    printf("\n\nElements after Sorting: ");
    arrprint(array, i);
}


void arrprint(int *arr, int n)
{
    for (int i=0; i<n; i++)
        printf ("%d  ",arr[i]);
    printf("\n");
}
