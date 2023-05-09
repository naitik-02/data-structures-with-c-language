/*   case
1.  insert at the begning.
2.  insert in between.
3.  insert at the end.
4.  insert after a node.
*/
#include <stdio.h>
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

// case 1 :

struct node *insertAtbegning(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//  case 2 :

struct node *insertAtbetween(struct node *head, int data, int index)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
} 
// case 3 ;

struct node* insertAtend(struct node* head , int data ){
    struct node* ptr = (struct node*)malloc(sizeof(struct node ));
    ptr->data = data ;
    struct node* p = head;

    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;

} 
//case 3 :



int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 10;
    third->next = NULL;
    printf("linklist before insertion ::::    \n ");
    traversal(head);

    head = insertAtbegning(head, 6);
    head = insertAtbetween(head, 9, 3);
    head = insertAtend(head, 11);
    printf("\nlinklist after insertion:::::    \n");
    traversal(head);

    return 0;
}