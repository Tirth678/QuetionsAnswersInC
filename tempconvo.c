#include<stdio.h>
int main(void)
{
    int celcuis;
    printf("enter the temp you want to convert into Fahrenheit\n");
    scanf("%d", &celcuis);
    printf("the temp in fahrenheit = %f", (celcuis*1.8)+32);
    return 0;
}