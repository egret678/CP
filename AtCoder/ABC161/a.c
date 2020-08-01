#include <stdio.h>

void swap(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swap1(int *x, int *y)
{
    *y ^= *x;  *x ^= *y;  *y ^= *x;
}

void swap2(int *x, int *y)
{
    *y = *x - *y;  *x -= *y;  *y += *x;
}

int main(void){
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    swap(&x, &y);
    swap1(&x, &z);

    printf("%d %d %d\n", x, y, z);

    return 0;
}