#include<stdio.h>
#include<malloc.h>
   
struct node{
    int data ;
    struct node * left;
    struct node * right;
};

struct node*  createnode(int data ){
    struct node * n = (struct node*)malloc(sizeof(struct node));
    n->data = data ;
    n->left = NULL;
    n->right = NULL;
    return n;
}

 struct node* binarysearchtree(struct node* root , int key){

    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if(root->data >key){
        return binarysearchtree(root->left,key);
    }
    else{
        return binarysearchtree(root->right , key);
    }
 }

int main(){
struct node *p1 = createnode(20);
struct node *p2 = createnode(14);
struct node *p3 = createnode(28);
struct node *p4 = createnode(4);
struct node *p5 = createnode(16);
struct node *p6 = createnode(25);
struct node *p7 = createnode(30);

p1->left = p2;
p1->right = p3;
p2->left = p4;
p2->right = p5;
p3->left = p6;
p3->right = p7;


   struct node* c = binarysearchtree(p1 , 30);

     if (c == NULL){
        printf("the element is not found ");

     }
     printf("found :%d ",c->data);
    return 0;
}