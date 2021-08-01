//16. Implement algorithms to insert, to delete, display the elements of the circular queue.
//[Assume: initially, front= 0,rear= -1]
//no of elements = front-rear+1

//COMPLETE

//program to perform insertion, deletion, display in a circular array-queue
#include <stdio.h>

int front=-1, rear=-1;
int main()
{
    int n, c, num;
    printf("\nProgram 16: Operations in a circular queue: (F>> : Front, <<R : Rear)\n");
    printf("\nEnter the size of queue: ");
    scanf ("%d", &n);
    int queue[n];

    while(c=1)
    {
        printf("\n\n  1: Insert ");
        printf("   2: Delete ");
        printf("   3: Display ");
        printf("   4: Exit");
        printf("\n  Enter (1-4): ");
        scanf ("%d", &c);
        switch(c)
        {
            case 1: printf("  Enter the element to insert into the queue: ");
                    scanf ("%d", &num);
                    insertQueue(queue, n, num);
                    display(queue, n);
                    break;

            case 2: num = deleteQueue(queue, n);
                    if (num!=-1)
                        printf("  Deleted element: %d\n", num);
                    display(queue, n);
                    break;

            case 3: display(queue, n);
                    break;

            default: exit(0);
        }
    }
    return 0;
}


void insertQueue(int *queue, int maxsize, int num)
{
    if (front==(rear+1)%maxsize)        //rear==maxsize-1 for normal queue
        printf("\n ----Queue Overflow----\n");
    else
    {
        if (rear==-1)
            front = rear = 0;
        else
            rear = (rear+1) % maxsize;      //rear=rear+1 for normal queue
        queue[rear] = num;
    }
}


int deleteQueue(int *queue, int maxsize)
{
    int temp;
    if (front == -1)
    {
        printf("\n ----Queue Underflow----\n");
        return -1;
    }

    else
    {   temp = queue[front];

        if(front==rear)
            front = rear = -1;
        else
            front=(front+1)% maxsize;   //front=front+1 for normal queue
    }
    return temp;
}


void display(int *queue, int maxsize)
{
    printf("  Queue: ");
    if (rear==-1)
    {
        printf("Rear = -1 ; Empty!");
    }
    else
    {
        int i;
        if (front<=rear)
        {
            for (i=0; i<front; i++)
                printf(" - ");
            printf(" F>>");
            for (i=front; i<rear; i++)
                printf("%d   ", queue[i]);
            printf("%d<<R", queue[rear]);
        }

        else
        {
            for (i=0; i<rear; i++)
                printf(" %d   ", queue[i]);
            printf("%d<<R ", queue[rear]);

            for (i=rear+1; i<front; i++)
                printf(" - ");

            printf(" F>>");
            for (i=front; i<maxsize; i++)
                printf("%d   ", queue[i]);
        }
    }
}



