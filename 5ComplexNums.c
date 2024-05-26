#include<stdio.h>
#include<string.h>
struct complex{
    int xaxis;
    int yaxis;
};
int main(void)
{
    struct complex c1,c2,c3,c4,c5;
    printf("enter the value of x-coordniate of vector 1\n");
    scanf("%d", &c1.xaxis);
    printf("enter the value of y-coordniate of vector 1\n");
    scanf("%d", &c1.yaxis);
    printf("enter the value of x-coordniate of vector 2\n");
    scanf("%d", &c2.xaxis);
    printf("enter the value of y-coordniate of vector 2\n");
    scanf("%d", &c2.yaxis);
    printf("enter the value of x-coordniate of vector 3\n");
    scanf("%d", &c3.xaxis);
    printf("enter the value of y-coordniate of vector 3\n");
    scanf("%d", &c3.yaxis);
    printf("enter the value of x-coordniate of vector 4\n");
    scanf("%d", &c4.xaxis);
    printf("enter the value of y-coordniate of vector 4\n");
    scanf("%d", &c4.yaxis);
    printf("enter the value of x-coordniate of vector 5\n");
    scanf("%d", &c5.xaxis);
    printf("enter the value of y-coordniate of vector 5\n");
    scanf("%d", &c5.yaxis);

    printf("the vector 1 on x-axis: %d and on y-axis: %d\n", c1.xaxis, c1.yaxis);
    printf("the vector 2 on x-axis: %d and on y-axis: %d\n", c2.xaxis, c2.yaxis);
    printf("the vector 3 on x-axis: %d and on y-axis: %d\n",c3.xaxis, c3.yaxis);
    printf("the vector 4 on x-axis: %d and on y-axis: %d\n", c4.xaxis, c4.yaxis); 
    printf("the vector 5 on x-axis: %d and on y-axis: %d\n", c5.xaxis, c5.yaxis);






    

    return 0;
}