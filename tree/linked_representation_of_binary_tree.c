#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *treerepresentation(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}
   
int main()
{
    struct node *p1 = treerepresentation(3);                                                                                                                                                                                            
    struct node *p2 = treerepresentation(6);
    struct node *p3 = treerepresentation(7);
                                                                                                                                                                                                                              
    p1->left = p2;
    p1->right = p1;

    return 0;
}