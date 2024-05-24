#include<stdio.h>
int main(void)
{
    FILE *ptr;
    int num=32;
    ptr = fopen( "double.txt", "w");
    fscanf(ptr, "%d",&num);
    num *=2;
    fprintf(ptr, "%d\n", num);

    return 0;
}