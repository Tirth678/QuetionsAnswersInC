#include<stdio.h>
void swap(int *x, int *y);

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("values before swap is %d and %d\n", a, b);
    swap(&a, &b);
    printf("values after swap are: %d and %d\n", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int result = *x;
    *x = *y;
    *y = result;
}
