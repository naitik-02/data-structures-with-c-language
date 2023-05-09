#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int r ;
    int f;
    int*arr;
};

 int isfull(struct queue *q){
    if(q->r == q->size - 1 ){
        return 1;
    }
    return 0;
 }
 int isEmpty(struct queue * q){
    if(q->r == q->f){
        return 1 ;
    }
    return 0 ;
 }

void enqueue(struct queue* q, int val){
    if(isfull(q)){
        printf("this queue is full \n");
    }
    else{
        q->r++;
        q->arr[q->r]= val;
        printf("the enqueue element is : %d \n" , val);

    }
}

int dequeue(struct queue* q ){
    
    int a ;if(isEmpty(q)){
        printf("this queue is empty\n");

    }
    else {
        q->f++;
         a = q->arr[q->f];

    }
    return a ;
}

int main(){
  struct queue* q ;
  q->size = 100;
  q->r = -1;
  q->f = -1;
  q->arr = (int *)malloc(q->size*sizeof(int));
