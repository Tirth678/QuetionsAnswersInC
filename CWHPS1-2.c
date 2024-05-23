// area of circle is equal to pie*r*r
// #include<stdio.h>
// int main(void)
// {
//     int radius;
//     float pi = 3.14;
//     printf("enter the value of the radius of the circle\n");
//     scanf("%d", &radius);
//     printf("the area of the circle is equal to: %f", pi*radius*radius);


//     return 0;
// }
// modifying the code for volume of cylinder

#include<stdio.h>
int main(void)
{
    int length;
    float pi= 3.14;
    int height;
    printf("enter the value of length of cylinder\n");
    scanf("%d", &length);
    printf("enter the value of height of the cylinder\n");
    scanf("%d", &height);

    printf("the volume of the cylinder is equal to: %f", pi*length*length*height);

    return 0;
}