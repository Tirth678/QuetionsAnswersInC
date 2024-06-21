#include<stdio.h>
int main(void){

    int temp;
    printf("enter the value of temp\n");
    scanf("%d", &temp);
    printf("the temp in fahrenheit = %f", (temp*1.8)+32);
    return 0;
}