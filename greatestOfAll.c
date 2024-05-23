#include<stdio.h>
int main(void)
{
    int a,b,c,d,max;
    printf("Enter the 4 values to find the greatest value of: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }

    printf("The greatest value is: %d\n", max);

    return 0;
}
