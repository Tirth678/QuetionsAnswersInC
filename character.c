#include<stdio.h>
int main(void)
{
    char let;
    printf("enter the value you want to find lowercase: ");
    scanf("%c", &let);
    if(let >= 'A' && let <='Z'){
        printf("the following is uppercase\n");
    }
    else if(let >= 'a' && let <= 'z'){
        printf("the following is lowercase\n", let);
    }
    return 0;
}