// two questions of the topic structure solved by harry
#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
struct vector vectorSum(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x+v2.x;
    result.y = v2.x+v2.y;
    return result;
}
int main(void)
{

    struct vector v1, v2, sum;
    v1.x = 2;
    v1.y = 4;
    // printf("X dim is: %d, Y dim is %d\n", v1.x, v1.y);

    v2.x = 5;
    v2.y = 5;
    // printf("X dim is: %d, Y dim is %d\n", v2.x, v2.y);


sum = vectorSum(v1, v2);



    printf("X dim result is %d and Y dim result is %d\n", sum.x, sum.y);



    return 0;
}