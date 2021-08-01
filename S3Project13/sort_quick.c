
// Program to implement Quick sort
//working
#include <stdio.h>

void main()
{
    int i, j, n, temp;
    printf("Program: Sorting of array using Quick sort\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }

    printf("Elements before sorting:\n");
    printArray(arr, n);

    quickSort(arr, n);

    printf("\nSorted elements of the array:\n");
    printArray(arr, n);

}

void printArray(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        printf(" %d  ", arr[i]);
    printf("\n");
}


void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}



void quickSort(int arr[], int size)
{
    quickSortUtil (arr, 0, size - 1);
}

void quickSortUtil (int arr[], int lower, int upper)
{
    if (upper<=lower)
        return;

    int pivot = arr[lower];
    int start = lower;
    int stop = upper;

    while (lower < upper)
    {
        while (arr[lower] <= pivot)
        {
            lower++;
        }
        while (arr[upper] > pivot)
        {
            upper--;
        }
        if (lower < upper)
        {
            swap(arr,upper,lower);
        }
    }
    swap(arr, upper, start); //upper is the pivot position

    quickSortUtil (arr, start, upper - 1); //pivot -1 is the upper for left sub array.
    quickSortUtil (arr, upper + 1, stop); // pivot + 1 is the lower for right sub array.
}
