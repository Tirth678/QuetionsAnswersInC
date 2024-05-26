#include<stdio.h>
#include<string.h>
struct complex{
    int x;
    int y;
};
typedef struct complex typedf_more_complex;

int main(void){
    typedf_more_complex more_complex;
    more_complex.x = 32;
    more_complex.y = 32;
    printf("the position of x cordinate of complex number is: %d\n", more_complex.x);
    printf("the position of y cordinate of complex number is: %d\n", more_complex.y);

    return 0;
}