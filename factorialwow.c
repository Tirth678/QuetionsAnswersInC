#include<stdio.h>
int factorial(int x);
int main(void)
{
    int x;
    printf("enter the value of which you want factorial: ");
    scanf("%d", &x);
    printf("the facotorial of the number is: %d", factorial(x));
    return 0;
}
int factorial(int x){
    if(x == 1 || x==1){
        return 1;
    }
    else
    {
        int result;
        result = x * factorial(x - 1);
        return result;
    }
}