#include<stdio.h>
int summation(int x);
int main(void)
{   
    int x;
    printf("write the number you want to find the summation of: ");
    scanf("%d", &x);
    printf("the factorial of the number is: %d", summation(x));
    


    return 0;
}
int summation(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        int result;
        result = x+summation(x-1);
        return result;
    }
}