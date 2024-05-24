#include<stdio.h>
int main(void)
{
    FILE *ptr;
    int a = 32;
    int b =43;
    int c=54;
    ptr = fopen("text.txt", "r");
    int num = 432;
    fprintf(ptr, "%d\n", num);
    fprintf(ptr, "%d, %d, %d\n", a, b, c);
    fclose(ptr);

    return 0;
}