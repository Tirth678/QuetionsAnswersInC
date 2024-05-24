#include<stdio.h>
int main(void)
{
    int toBePointed[10] = {1,2,3,4,5,6,7,8,9,10};
    int a = toBePointed[0];
   int *ptr = &a;
   
   printf("%d\n", a);
   printf("%d\n", *(ptr)+2);


    return 0;
}