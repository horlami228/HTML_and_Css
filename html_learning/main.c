#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 2;
    int *ptr;
    int array[] = {1, 2};

    for(int i = 0; i < 2; i++)
    {
        printf("%d\n", array[i]);
    }

    ptr = malloc(size * sizeof(int));

    for(int j = 0; j < 2; j++)
    {
        ptr[j] = j;
        printf("%d\n", ptr[j]);
    }

    int k = 2;
    int ptr1[]
}