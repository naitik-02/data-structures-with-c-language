// making a stack in memory;
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top ;
    int *arr;
};

int main(){
    struct stack *sp =(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr =(int*)malloc(sp->size*sizeof(int));
    printf("stack has been completed succesfully");


    return 0;
}