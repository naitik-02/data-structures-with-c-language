#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int r ;
    int f;
    int*arr;
};

 int isfull(struct queue *q){
    if((q->r +1)%q->size == q->f){
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
      q->r= (q->r+1)%q->size;
        q->arr[q->r]= val;
        printf("the enqueue element is : %d \n" , val);

    }
}

int dequeue(struct queue* q ){
    
    int a ;if(isEmpty(q)){
        printf("this queue is empty\n");

    }
    else {
       q->f= ( q->f+1)%q->size;
         a = q->arr[q->f];

    }
    return a ;
}

int main(){
  struct queue* q ;
  q->size = 4;
  q->r = 0;
  q->f = 0;
  q->arr = (int *)malloc(q->size*sizeof(int));

  enqueue(q , 3);
  enqueue(q , 6);
  enqueue(q ,7);
  
     printf("dequeuing element is %d \n" , dequeue(q));
     printf("dequeuing element is %d \n" , dequeue(q));
   enqueue(q , 9);
     
      if ( isEmpty(q)){
        printf("queue is empty\n");

      }

      if(isfull(q)){
        printf("the queue is full\n");
      }
    return 0;
}