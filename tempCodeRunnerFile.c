#include<stdio.h>
int factorial(int x);
int main(void)
{   
    int x;
    printf("write the number you want to find the facotial of: ");
    scanf("%d", &x);
    printf("the factorial of the number is: %d", factorial(x));
    


    return 0;
}
int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        int result;
        result = x*factorial(x-1);
        return result;
    }
}