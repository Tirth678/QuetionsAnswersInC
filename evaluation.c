// if talking by compiler then it will as follows:
// *,/,%,+,-,=
// to change the priority we use parenthesis
#include<stdio.h>
int main(void)
{
    int x,y,z,k;
    x = 2;
    y = 3;
    z = 3;
    k = 1;
    printf("result computed by compiler: %d\n", 3*x/y-z+k);
    printf("result computed my us with parenthesis: %d\n", (3*x)/y-z+k);
    return 0;
}
