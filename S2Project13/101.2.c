#include <stdio.h>
#include <math.h>

int main()
{
    int a=4,b=5;
    double result;
    result = (5*a + a*b*b)/(sqrt(a*a) + 9);
    printf("Result = %lf", result);

    return 0;
}
