
/*Write a program to add two polynomials using linked lists*/

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
struct node* addPolynomial (struct node *front1, struct node *front2, int d1, int d2);
struct node* append (struct node* thead, int c, int e);

void main()
{
    printf("\nProgram 14: Program to add two polynomials using linked-lists:\n");

    int d1, d2, i, coeff;
    node1 *front1 = NULL;
    node1 *front2 = NULL;
    node1 *polysum = NULL;
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

    polysum = addPolynomial (front1, front2, d1, d2);
    printf("\nSum of the two polynomials: ");
    printList (polysum);
}

// Function to create/insert new node
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

//appending at the end of the list after addition
struct node* append(struct node* thead, int c, int e)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coef=c;
    newnode->exp=e;
    if(thead==NULL)     //empty list
    {
        newnode->next=NULL;
        return newnode;
    }
    struct node* trav=thead;
    while(trav->next!=NULL) // Traversing till the end
        trav=trav->next;

    trav->next=newnode;
    newnode->next=NULL;
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


//function to add two polynomials
struct node* addPolynomial (node1 *front1, node1 *front2, int d1, int d2)
{
    node1 *polysum = NULL;
    node1 *t1, *t2;
    t1 = front1;
    t2 = front2;

    while(t1!=NULL && t2!=NULL)
    {
        if(t1->exp > t2->exp)
        {
            polysum = append(polysum, t1->coef, t1->exp);
            t1=t1->next;
        }
        else if(t1->exp < t2->exp)
        {
            polysum = append(polysum, t2->coef, t2->exp);
            t2=t2->next;
        }
        else
        {
            polysum = append(polysum, (t1->coef)+(t2->coef), t1->exp);
            t1=t1->next;
            t2=t2->next;
        }
    }

    while(t1!=NULL)
    {            //copying the remaining terms of polynomial 1
        polysum = append(polysum, t1->coef, t1->exp);
        t1=t1->next;
    }

    while(t2!=NULL)
    {            //copying the remaining terms of polynomial 2
        polysum = append(polysum, t2->coef, t2->exp);
        t2=t2->next;
    }
    return polysum;
}
