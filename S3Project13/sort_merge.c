
// Program to implement Merge sort
//working
#include <stdio.h>

void main()
{
    int i, j, n, temp;
    printf("Program: Sorting of array using Merge sort\n");
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
    printArray(arr, n);

    mergeSort(arr,n);

    printf("\nSorted elements of the array:\n");
    printArray(arr, n);

}

void printArray(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        printf(" %d  ", arr[i]);
    printf("\n");
}


void merge(int* arr,int* tempArray, int lowerIndex, int middleIndex, int upperIndex)
{
    int lowerStart=lowerIndex;
    int lowerStop=middleIndex;
    int upperStart=middleIndex+1;
    int upperStop=upperIndex;
    int count=lowerIndex;
    while(lowerStart<=lowerStop && upperStart<=upperStop)
    {
        if(arr[lowerStart]<arr[upperStart])
            tempArray[count++]=arr[lowerStart++];
        else
            tempArray[count++]=arr[upperStart++];
    }
    while(lowerStart<=lowerStop)
    {
        tempArray[count++]=arr[lowerStart++];
    }
    while( upperStart<=upperStop)
    {
        tempArray[count++]=arr[upperStart++];
    }

    for(int i=lowerIndex;i<=upperIndex;i++)
        arr[i]=tempArray[i];
}
void mergeSrt(int *arr,int* tempArray, int lowerIndex, int upperIndex)
{
    if(lowerIndex >= upperIndex)
        return;

    int middleIndex=(lowerIndex+upperIndex)/2;
    mergeSrt(arr,tempArray,lowerIndex,middleIndex);
    mergeSrt(arr,tempArray,middleIndex+1,upperIndex);
    merge(arr,tempArray,lowerIndex,middleIndex,upperIndex);
}
void mergeSort(int *arr, int size)
{
    int *tempArray=(int*)malloc(size*sizeof(int));
    mergeSrt(arr,tempArray,0,size-1);
}

