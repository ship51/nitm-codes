#include <stdio.h>

void main()
{
    int i, n=5, pos;
    int arr[n];
    printf("Enter elements of the array : \n");
    for (i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (i=pos; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    for (i=0; i<n-1; i++)
    {
        printf("%d  ",arr[i]);
    }

}
