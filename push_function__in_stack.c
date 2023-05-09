//push elements in stack ;

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("overflow cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("the stack is structured in memory \n");
printf("before push elements to stack\n");
    printf("%d \n", isfull(sp));
    printf("%d \n", isempty(sp));
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
    push(sp, 4);
printf("after push elements to stack\n");
    printf("%d\n", isfull(sp));
    printf("%d\n", isempty(sp));

    return 0;
}