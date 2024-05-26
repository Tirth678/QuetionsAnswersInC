#include<stdio.h>
#include<string.h>
struct students{
    int marks;
    int roll_no;
    char name[20];
};
int main(void)
{
    struct students s1;
    s1.marks = 43;
    s1.roll_no = 01;
    strcpy(s1.name, "Harry");

    struct students s2;
    s2.marks = 78;
    s2.roll_no = 02;
    strcpy(s2.name, "Garry");

    struct students s3;
    s3.marks = 91;
    s3.roll_no = 03;
    strcpy(s3.name, "Cherry");

    printf("The marks of the first student is %d\n", s1.marks);

    printf("the marks of the second student is %d\n", s2.marks);

    printf("the marks of the third student is %d\n", s3.marks);

    printf("the name of the first student is to %s\n", s1.name);

    printf("the marks of the second student is %s\n", s2.name);
    
    printf("the marks of the third student is %s\n", s3.name);
    

    return 0;
}