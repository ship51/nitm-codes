#include<stdio.h>
main()
{
    int n,avg,i;
    printf("Enter the numbers",n);
    scanf("%d",&n);
    int arr[n];
    float sum=0;
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }
      avg=sum/n;
    printf("The value is %d",avg);

}
