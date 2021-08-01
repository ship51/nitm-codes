//16. Implement algorithms to insert, to delete, display the elements of the circular queue.
//[Assume: initially, front= 0,rear= -1]
//no of elements = front-rear+1

//COMPLETE

//program to perform insertion, deletion, display in a circular list-queue
#include <stdio.h>

struct queue
{
    int value;
    int size;
    int front, rear;
    int* q;
};


void insertQueue(struct queue *q1, int v)
{
    if (q1->front == (q1->rear+1)%q1->size)        //rear==maxsize-1 for normal queue
        printf("\n ----Queue Overflow----\n");
    else
    {
        if (q1->rear==-1)
            q1->front = q1->rear = 0;
        else
            q1->rear = (q1->rear+1) % q1->size;      //rear=rear+1 for normal queue
        q1->q[q1->rear] = v;
    }
}


int deleteQueue(struct queue *q1)
{
    int temp;
    if (q1->front == -1)
    {
        printf("\n ----Queue Underflow----\n");
        return -1;
    }

    else
    {   temp = q1->q[q1->front];

        if(q1->front==q1->rear)
            q1->front = q1->rear = -1;
        else
            q1->front=(q1->front+1)% q1->size;   //front=front+1 for normal queue
    }
    return temp;
}


void display(struct queue *q1)
{
    printf("  Queue: ");
    if (q1->rear==-1)
    {
        printf("Rear = -1 ; Empty!");
    }
    else
    {
        int i;
        if (q1->front <= q1->rear)
        {
            for (i=0; i<q1->front; i++)
                printf(" - ");
            printf(" F>>");
            for (i=q1->front; i<q1->rear; i++)
                printf("%d   ", q1->q[i]);
            printf("%d<<R", q1->q[q1->rear]);
        }

        else
        {
            for (i=0; i<q1->rear; i++)
                printf(" %d   ", q1->q[i]);
            printf("%d<<R ", q1->q[q1->rear]);

            for (i=q1->rear+1; i<q1->front; i++)
                printf(" - ");

            printf(" F>>");
            for (i=q1->front; i<q1->size; i++)
                printf("%d   ", q1->q[i]);
        }
    }
}


int main()
{
    struct queue queue1;
    int n, c, num;
    printf("\nProgram 16: Operations in a circular queue: \n");
    printf("\nEnter the size of queue: ");
    scanf ("%d", &queue1.size);
    queue1.q = (int *)malloc(queue1.size * sizeof(int));
    queue1.front = -1;
    queue1.rear = -1;


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
                    insertQueue(&queue1, num);
                    display(&queue1);
                    break;

            case 2: num = deleteQueue(&queue1);
                    if (num!=-1)
                        printf("  Deleted element: %d\n", num);
                    display(&queue1);
                    break;

            case 3: display(&queue1);
                    break;

            default: exit(0);
        }
    }
    return 0;
}





