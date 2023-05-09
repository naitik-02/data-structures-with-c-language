#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;

} ;
struct node *createtree(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preOrder(struct node * root){
    if(root!=NULL){
        preOrder(root->left);
        preOrder(root->right);
        printf("%d",root->data);
    }
}
 
int main()
{
    struct node *p1 = createtree(4);
    struct node *p2 = createtree(1);
    struct node *p3 = createtree(6);
    struct node *p4 = createtree(5);
    struct node *p5 = createtree(2);


    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;

    preOrder(p1);


    return 0;
}