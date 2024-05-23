#include<stdio.h>
int main(void)
{
    int length;
    int breath;
    printf("enter the value of length of rectangle\n");
    scanf("%d", &length);
    printf("enter the value of breath of rectangle\n");
    scanf("%d", &breath);

    printf("the area of the rectangle is: %d\n", length*breath);

    return 0;
}