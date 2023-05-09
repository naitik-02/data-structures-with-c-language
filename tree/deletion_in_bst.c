#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
                                            // ------- not completed ---------//
  struct node *inOrderPredecessor(root){
    root = rooot->left;
    while(root->right !=NULL){
        root = root->right;
        return root;
    }
  }
struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
struct node* deletenode(struct node*root , int value){
    struct node * ipre ;
    if(root== NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
if (value < root->data){
      root->left = deletenode(root->left, value);
    
}
else if (value > root->data){
    root->right = deletenode(root->right , value);

}
else{
    ipre = inOrderPredecessor(root);
    root->data = ipre->data;
     root->left = deletenode(root->left , ipre->data);
     return root;
}

}
int main(){
      struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;


    return 0;
}