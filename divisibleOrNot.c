#include<stdio.h>
int main(void)
{
    int disivle;
    printf("enter the number you want to check divisibility\n");
    scanf("%d", &disivle);
    if(disivle%97 == 0){
        printf("the value is divisible by 97");
    }
    else{
        printf("the value is not divisble by 97");
    }

    return 0;
}