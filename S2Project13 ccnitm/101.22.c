#include <stdio.h>
#include <math.h>
//
int main()
{
    int a,b;
    printf ("Enter the value of a and b : ");
    scanf ("%d %d", &a,&b);
    double result;
    result = (5*a + a*b*b)/(sqrt(a*a) + 9);
    printf("Result = %lf", result);

    return 0;
}
