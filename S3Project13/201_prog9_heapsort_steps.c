//9. Write a program to implement heap sort.

//COMPLETE

#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{
    // Build heap (rearrange array) where each node has larger value than its children
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    printf("\nArray after building heap: (can be visualized by drawing) \n");
    printArray(arr, n);

    //building max heap
    for (int i=n-1; i>0; i--)
    {
        // Moving current root to end which is to be left untouched
        swap(&arr[0], &arr[i]);
        printf("\nPass %d:  ", n-i);
        printArray(arr, n);
        //heapifying from root node 0 each time with decreasing scope
        heapify(arr, i, 0);
    }
}


void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int i, n;
    printf("Program 9: Sorting of array using Heap sort\n");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf("\nInput array: \n");
    printArray(arr, n);
    heapSort(arr, n);
    printf("\nSorted array in ascending order: \n");
    printArray(arr, n);
}
