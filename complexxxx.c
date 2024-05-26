#include<stdio.h>
#include<string.h>
struct complex{
    int x;
    int y;
};
int main(void){
    struct complex c1;
    c1.x = 32;
    c1.y = 32;
    printf("the position of x cordinate of complex number is: %d\n", c1.x);
    printf("the position of y cordinate of complex number is: %d\n", c1.y);

    return 0;
}