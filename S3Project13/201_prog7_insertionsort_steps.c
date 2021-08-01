//7. Write a program to implement Insertion sort in C

//COMPLETE

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, n, pos, key;

    printf("Program 7: Sorting of array using Insertion sort\n");
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

    for (j=1; j<n; j++)
    {

        key = *(ptr+j);
        pos = j;
        for (i=j-1; i>=0; i--) //finding position for current key element
        {
            if (key<*(ptr+i))
            {
                pos=i;
            }
        }
        //printf("\n arr[%d] shifting to pos -> %d", j, pos);

        for (i=j; i>pos; i--)       //shifting the elements up to position where key is to be placed
        {
            *(ptr+i) = *(ptr+i-1);
        }
        *(ptr+pos) = key;
        printf("\n\nPass %d:  ", j);
        arrprint(arr,n);
    }

    printf("\n\nSorted elements of the array in ascending order:\n");
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
