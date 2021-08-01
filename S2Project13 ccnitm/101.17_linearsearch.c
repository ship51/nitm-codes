
//Program to find a key using Linear search
#include <stdio.h>                          //complete

void LSearch(int key, int a[], int n)
{
    int i,flag=0;
    for(i=0; i<n; i++)
    {
        if (key==a[i])
        {
            printf("Element found. Position: %d", i+1);
            flag=1;
            break;
        }
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
    printf("Enter the %d elements in the array: \n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array : \n", n);
    for (i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the key to be searched in the array: ");
    scanf("%d", &key);
    LSearch(key,a,n);
}

