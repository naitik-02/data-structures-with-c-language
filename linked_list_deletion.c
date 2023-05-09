/*         case::
--delecting the first node ;
--deleting the node in between ;
--delete the last node ;
--insert after a node ;
*/
#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// //case 1 :
// struct node* deleteAtfirst(struct node* head ){
//     struct node* ptr = head ;
//     head = head->next ;
//     free(ptr);
//     return head;
// } 

//  //case 2 :

//  struct node* deleteAtbetween(struct node* head , int index){
//     struct node *p = head;
//     int i = 0 ;


//     while(i != index-1){
//         p = p->next;
//         i++;
//     }
//     struct node* q = p->next;
//     p->next = q->next;
//     free(q);
//     return head;
//  }

 //case 3 ; 

//  struct node* deleteAtend(struct node* head){
//     struct node* p = head;
//     struct node* q = head->next;
//     while(q->next != NULL){
//         p = p->next;
//         q = q->next;

//     }
//     p->next = q->next;
//     free(q);
//     return head;
//  }

 // case 4 ;

 struct node* deleteAtvalue(struct node* head , int value){
    struct node* p = head;
    struct node* q = head->next;

    while(q->data != value && q->next !=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next ;
        free(q);
    }
    return head;
 }


int main(){
        struct node *head;
    struct node *second;
    struct node *third;
    struct node* fourth;
struct node* fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth= (struct node *)malloc(sizeof(struct node));
fifth = (struct node *)malloc(sizeof(struct node));


    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 10;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = fifth;

    fifth->data = 12;
    fifth->next = NULL;

    traversal(head);
    // head = deleteAtfirst(head);
    // head = deleteAtbetween(head,2);
     //head = deleteAtend( head);
     head = deleteAtvalue(head , 10);
    printf("\nafter delete\n");

    traversal(head);

    return 0;
}