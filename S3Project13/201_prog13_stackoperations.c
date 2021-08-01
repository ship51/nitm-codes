
/*Write a program to implement algorithm to insert an element in a stack(push),
to delete an element from a stack(pop) and to
display the elements of the stack. {assume: initially, top = -1}.*/

//program to implement stack operations: push, pop, display
#include <stdio.h>

struct stack
{
    int size;
    int top;
    int *s;
};


void push(struct stack *st, int value)
{
    if (st->top == st->size-1)
    {
        printf("\n  Stack overflow!! Cannot insert into stack. ");
    }
    else
    {
        st->top++;
        st->s[st->top] = value;
    }
}

int pop(struct stack *st)
{
    int x=-1;
    if (st->top == -1)
    {
        printf("\n  Stack underflow!! Cannot delete when empty. ");
    }
    else
    {
        x = st->s[st->top--];
    }
    return x;
}


void main()
{
    struct stack st;
    int c, num;
    printf("\nProgram 13: Stack Operations \n");
    printf("\nEnter the size of stack: ");
    scanf ("%d", &st.size);
    st.s = (int *)malloc(st.size * sizeof(int));
    st.top = -1;

    while(c=1)
    {
    printf("\n  1: Push (insert element) ");
    printf("\n  2: Pop (delete element) ");
    printf("\n  3: Display ");
    printf("\n  4: Exit");
    printf("\n  Enter (1-4): ");
    scanf ("%d", &c);
    switch(c)
    {
        case 1: printf("  Enter the element to insert into the stack: ");
                scanf ("%d", &num);
                push(&st, num);
                display(st);
                break;

        case 2: num = pop(&st);
                if (num!=-1)
                    printf("\n  Popped element: %d", num);
                display(st);
                break;

        case 3: display(st);
                break;

        default:exit(0);
    }
    }

}

void display(struct stack st)
{
    printf("\n  Stack:  Top -> ");
    if (st.top==-1)
    {
        printf("-1 ; Stack is empty!");
    }
    else
        for(int i = st.top; i >= 0; i --)
        {
            printf("%d  ", st.s[i]);
        }
    printf("\n");
}



