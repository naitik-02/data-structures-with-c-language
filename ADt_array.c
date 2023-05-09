#include <stdio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myarray *marks, int tsize, int usize)
{
    marks->total_size = tsize;
    marks->used_size = usize;
    marks->ptr = (int *)malloc(tsize * sizeof(int));
}

void setvalue(struct myarray *marks)
{
   int n;
    for (int i = 0; i < marks->used_size; i++)
    {
        printf("enter no %d :", i);
        scanf("%d", &n);
        (marks->ptr)[i] = n;
    }
}
void show(struct myarray *marks)
{
    for (int i = 0; i < marks->used_size; i++)
    {
        printf("%d\n", (marks->ptr)[i]);
    }
}

int main()
{
    struct myarray marks;
    createarray(&marks, 10, 4);

    setvalue(&marks);
    show(&marks);

    return 0;
}