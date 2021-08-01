
/*Write a program to implement algorithm to insert an element in a stack(push),
to delete an element from a stack(pop) and to
display the elements of the stack. {assume: initially, top = -1}.*/

//program to implement stack operations: push, pop, display
#include <stdio.h>

void main()
{
    int n, c, num;
    int top = -1;
    printf("\nProgram 13: Stack Operations \n");
    printf("\nEnter the size of stack: ");
    scanf ("%d", &n);
    int arr[n];

    while(c=1)
    {
    printf("\n  1: Push (insert element into the stack) ");
    printf("\n  2: Pop (delete element from the stack) ");
    printf("\n  3: Display (elements in the stack) ");
    printf("\n  4: Exit");
    printf("\n  Enter (1-4): ");
    scanf ("%d", &c);
    switch(c)
    {
        case 1: if (top == n-1)
                    printf("\n  Stack overflow!! Cannot insert into stack. ");
                else
                {
                    printf("\n  Enter the element to insert into the stack: ");
                    scanf ("%d", &num);
                    top = top+1;
                    arr[top] = num;
                }
                printStack(arr, top);
                break;

        case 2: if (top == -1)
                    printf("\n  Stack underflow!! Cannot delete when empty. ");
                else
                {
                    printf("\n  Popped element: %d", arr[top]);
                    top = top-1;
                }

                printStack(arr, top);
                break;

        case 3: printStack(arr, top);
                break;


        default:exit(0);
    }
    }

}

void printStack (int *arr, int n)
{
    printf("\n  Stack:  Top -> ");
    if (n==-1)
    {
        printf("-1 ; Stack is empty!");
    }
    else
        for (int top=n; top>-1; top--)
            printf ("%d  ",arr[top]);
    printf("\n");
}



