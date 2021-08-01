
//Program to find a key using Binary search
#include <stdio.h>
void BSearch(int key, int a[], int n)
{                           //assuming array is in decreasing order
    int i,ub=n,lb=0,mid,flag=0;
    while (lb<=ub)
    {
        mid=(lb+ub)/2;
        if (key==a[mid])
        {
            printf("Element found. Position: %d", mid);
            flag=1;
        }
        else if (key<a[mid])
            lb=mid+1;
        else
            ub=mid-1;
    }
    if (flag==0)
        printf("Element not found!");
}
void main()
{
    int i,n,key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the %d elements in the array: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*printf("Enter the %d elements in the array, in descending order: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }*/

    printf("Enter the key to be searched in the array: ");
    scanf("%d", &key);
    BSearch(key,a,n);
}

