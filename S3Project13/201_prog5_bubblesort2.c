//5. Write a program to implement Bubble sort in C
//2
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

    printf("Elements before sorting:\n");
    arrprint(arr,n);

    BubbleSort (arr, n);

    printf("\n\nSorted elements of the array: ");
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

void BubbleSort (int *ptr, int n)
{
    int i, j, temp, p=1, flag, swaps;
    for (i=0; i<n; i++)
    {
        flag=0; swaps=0;
        printf("\n\n Iteration %d:  ", p++);
        for (j=0; j<n-i-1; j++)
        {

            if (*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
                flag=1;
                swaps++;
            }
            if (flag != 0)
            {
                arrprint(ptr, n);
                printf("    ");
            }
        }
        printf("-----%d swaps", swaps);
        if (flag==0)
            break;
    }
}
