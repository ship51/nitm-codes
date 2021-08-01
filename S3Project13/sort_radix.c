// Write a program to implement radix sort.

//COMPLETE

#include <stdio.h>


void main()
{
    int i, n;

    printf("Program: Sorting of array using Radix sort\n");
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

    BucketSort(arr,n);

    printf("\n\nSorted elements of the array in ascending order:\n");
    arrprint(arr,n);

}
void arrprint(int *arr, int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("%d  ",arr[i]);
    }
}


void BucketSort(int array[], int n)
{
    int i, j, max=array[0], pos;
    int buckets[10];

    //finding max element in the array
    for (i = 1; i < n; i++)
    {
        if (max < array[i])
            max = array[i];
    }

    //position for each digit through the digits in the max element
    for (pos=1; max/pos >0; pos*=10)
    {
        CountSort (array, n, pos);
    }
}

void CountSort (int array[], int n, int pos)
{
    int count[10] = {0};
    int i, buckets = 10;

    //temporary array to store the array
    int* temp = (int*)malloc(n * sizeof(int));

    //increasing the values for count array element for each LSD
    for (i=0; i<n; i++)
    {
        ++count[(array[i]/pos) % 10];
    }

    //cumulative addition in count array with previous element
    for (i=1; i<=buckets; i++)
    {
        count[i] = count[i] + count[i-1];
    }

    //entering corresponding element in the temp array
    for (i = n-1; i >= 0; i--)
    {
        temp[--count[(array[i]/pos) % 10]] = array[i];
    }

    //copying back from temp array to original array
    for (i=0; i<n; i++)
    {
        array[i] = temp[i];
    }

}
