
/*17. Implement a binary search tree using linked list and traverse in pre-order, in-order and
post-order.*/

//COMPLETE

#include <stdio.h>
struct BinaryNode
{
    int value;
    struct BinaryNode *left;
    struct BinaryNode *right;
    struct BinaryNode *p;   // to store address of parent
};
typedef struct BinaryNode node;

int flag=0, i=1;

// Function to create/insert new node
struct BinaryNode* TreeInsert(struct BinaryNode* tree, struct BinaryNode* z)
{
    node* y = NULL;
    node* x = tree;
    while (x != NULL)
    {
        y = x;
        if (z->value < x->value)
            x = x->left;
        else
            x = x->right;
    }

    z->p = y;
    if (y == NULL)
        tree = z;

    else if (z->value < y->value)
        y->left = z;

    else
        y->right = z;

    return tree;
}

void Print(node* x, char *p)
{
    if (flag ==1)
        printf("\n");
    if (x!=NULL)
    {
        printf(" |%d| %s", x->value, p);

        Print(x->left, "<-");
        Print(x->right, "->");
        flag = 1;
    }
}
/*

for (int i=0; i<n; i++) //outer loop for number of rows(n)
{
    for (int j=n-i; j>1; j--) //inner loop for spaces
    {
        System.out.print(" "); //print space
    }
    for (int j=0; j<=i; j++ ) //inner loop for number of columns
    {
        System.out.print("* "); //print star
    }
}
    System.out.println(); //ending line after each row

*/


void Preorder(node* x)
{
    if (x!=NULL)
    {
        printf(" %d ", x->value);
        Preorder(x->left);
        Preorder(x->right);
    }
}


void Inorder(node* x)
{
    if (x!=NULL)
    {
        Inorder(x->left);
        printf(" %d ", x->value);
        Inorder(x->right);
    }
}


void Postorder(node* x)
{
    if (x!=NULL)
    {
        Postorder(x->left);
        Postorder(x->right);
        printf(" %d ", x->value);
    }
}


/*
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
*/

void main()
{
    printf("\nProgram 17: Binary search tree using linked list and traversal: \n");

    int i, n, num;
    node *tree = NULL;
    node *newnode = NULL;
    printf("\nEnter the number of terms: \n");
    scanf ("%d", &n);
    printf("\nEnter %d numbers: \n", n);
    for (i=1; i<=n; i++)
    {
        scanf ("%d", &num);
        newnode = (node*)malloc (sizeof(node));
        newnode->value = num;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->p = NULL;
        tree = TreeInsert(tree, newnode);
    }

    Print(tree, " ");

    printf("\nTree traversal (PREorder): ");
    Preorder(tree);

    printf("\n\nTree traversal (INorder): ");
    Inorder(tree);

    printf("\n\nTree traversal (POSTorder): ");
    Postorder(tree);

}
