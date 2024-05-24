// To find out if the value entered by the user is a prime or not.
#include<stdio.h>
int main(void)
{
    int x;
    printf("enter the number you want to check prime ");
    scanf("%d", &x);
    
    if(x%x == 0 && x%1 == 0 && x%2 != 0 || x%3 == 0 || x == 2){
        printf("the number is prime\n");
    }
    else{
        printf("the number is not prime\n");
    }

    return 0;
}
