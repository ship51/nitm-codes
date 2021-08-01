
#include <stdio.h>


void main()
{
    int i, j, m, n, a, b;

    printf("Program: \n");
    printf("\nEnter value of m and n: ");
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            arr[i][j] = i+j;
        }
    }

    printf("Elements:\n");
    arrprint(arr,m,n);

    printf("\nEnter value of a and b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n\narr[%d][%d]:  %d \n", a,b, arr[a][b]);
    //printf("\narr[%d][%d]:  %d ", 10,25, arr[10][25]);
    //arrprint(arr,m/2,n+5);

}
void arrprint(int *arr, int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d  ", *(arr+(i*m)+ j));
        }
        printf("\n");
    }
}

