// write a program to search a element in array by linear search;
#include <stdio.h>

int linearsearch(int arry[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arry[i] == element)
        {

            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arry[] = {1, 2, 4, 6, 7, 8, 9, 33, 44};
    int element = 2;
    int size = 9;
    int search = linearsearch(arry, element, size);
    printf("the element %d is in the index %d", element, search);
    return 0;
}