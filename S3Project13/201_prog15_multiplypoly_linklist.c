//15. Write a program to multiply two polynomials using linked lists.

//COMPLETE

#include <stdio.h>
struct node
{
    int coef;
    int exp;
    struct node *next;
};
typedef struct node node1;

struct node* createNode (struct node *front, int c, int e);
struct node* multiplyPoly (struct node *front1, struct node *front2);
struct node* append (struct node* thead, int c, int e);

// Function to create/insert new node at the front
struct node* createNode(struct node *front, int c, int e)
{
    node1 *newnode;
    newnode = (node1*)malloc(sizeof(node1));
    newnode->coef = c;
    newnode->exp = e;

    if (front == NULL)
    {
        front = newnode;
        front->next = NULL;
    }
    else
    {
        newnode->next = front;
        front = newnode;
    }
    return front;
}

//inserting at appropriate position after multiplication
struct node* append(struct node* thead, int c, int e)
{
    /*

    This algorithm only works when exponents are in the given sequence

    create a node
    enter the values: exp and the coef into the node
    check if poly is NULL or not
    if poly is NULL
            poly = newnode
    else if (poly->exp > newnode->exp)
        traverse just before the node to be inserted or to
        the power to which coefficient can be added
        insert the node into the list; make adjustments
    else ..(poly->exp < newnode->exp)
        NEWNODE will come before poly
        newnode->next = poly
        poly = newnode
    */
    int flag=0;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coef=c;
    newnode->exp=e;
    if(thead==NULL)     //empty list
    {
        newnode->next=NULL;
        return newnode;
    }

    struct node* trav=thead; //node to traverse the list
    struct node* travnext; //next node to trav

    // Traversing till position after which it is to be inserted
    while(trav->exp > newnode->exp && trav->next!=NULL)
    {
        trav=trav->next;
        if (trav->exp == newnode->exp)
        {
            trav->coef += newnode->coef;
            flag = 1;
            //flag->1 when coefficient is added to corresponding position
            break;
        }
    }

    if (flag==0)
    {
        //inserting as a node; exponent of newnode does not exist in list
        travnext = trav->next;
        trav->next=newnode;
        newnode->next=travnext;
    }
    return thead;
}


//Function to print list
void printList (node1 *front)
{
    node1 *temp;
    temp = front;
    if (temp == NULL)
    {
        printf("Empty list!!");
    }
    else
    {
        while (temp->next != NULL)
        {
            printf(" %dx^%d +", temp->coef, temp->exp);
            temp = temp-> next;
        }
        printf(" %dx^%d", temp->coef, temp->exp);
    }
    printf("\n");
}


//function to multiply two polynomials
struct node* multiplyPoly (node1 *front1, node1 *front2)
{
    int i;
    node1 *t1, *t2;
    t1 = front1;
    t2 = front2;
    node1 *poly = NULL;

    while(t1!=NULL && t2!=NULL)
    {
        for (i=t1->exp; i>=0; i--)//taking first node of t1, then next each time
        {
            while (t2!=NULL)//multiplying with all nodes of t2, adding
            {
                poly = append(poly, (t1->coef)*(t2->coef), (t1->exp)+(t2->exp));
                t2 = t2->next;
            }
            t1 = t1->next;
            t2 = front2;
        }
    }
    return poly;
}

void main()
{
    printf("\nProgram 15: Program to multiply two polynomials using linked-lists:\n");

    int d1, d2, i, coeff;
    node1 *front1 = NULL;
    node1 *front2 = NULL;
    node1 *poly = NULL;
    printf("\nEnter the degree of the First polynomial: \n");
    scanf ("%d", &d1);
    for (i=0; i<=d1; i++)
    {
        printf("Enter the coefficient of the x^%d term: ", i);
        scanf ("%d", &coeff);
        front1 = createNode(front1, coeff, i);
        //i is the exponent here
    }

    printf("\nEnter the degree of the Second polynomial: \n");
    scanf ("%d", &d2);
    for (i=0; i<=d2; i++)
    {
        printf("Enter the coefficient of the x^%d term: ", i);
        scanf ("%d", &coeff);
        front2 = createNode(front2, coeff, i);
        //i is the exponent here
    }

    printf("\nThe first polynomial: ");
    printList (front1);

    printf("\nThe second polynomial: ");
    printList (front2);

    poly = multiplyPoly(front1, front2);
    printf("\nProduct of the two polynomials: ");
    printList (poly);
}
