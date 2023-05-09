//is full or is empty functions in stack ;

#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int*arr;
};
int isfull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
    return 0;
}
}
int isempty(struct stack*ptr){
    if(ptr->top== -1){
        return 1;
    }
    else{
    return-1;
}
}


int main(){
    struct stack* sp =(struct stack *)malloc(sizeof(struct stack));
    sp->size =10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    printf("the stack is structured in memory \n");
    
    printf("%d\n",isfull(sp));
    printf("%d\n",isempty(sp));

    
    return 0;
}