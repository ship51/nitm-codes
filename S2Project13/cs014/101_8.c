#include <stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter two numbers to swap their values: \n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    c=a; d=b;
    //using third variable c
    c=a;
    a=b;
    b=c;
    printf ("\nUsing third variable: \nValue of a after swapping : %d",a);
    printf ("\nValue of b after swapping : %d",b);

    //without using third variable
    c=c+d;
    d=c-d;
    c=c-d;
    printf ("\n\nWithout using third variable: \nValue of a after swapping : %d",c);
    printf ("\nValue of b after swapping : %d",d);

    return 0;
}

