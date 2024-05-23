#include<stdio.h>
int main(void)
{
    int english;
    int maths;
    int neuro;
    printf("enter the marks of english\n");
    scanf("%d", &english);
    printf("enter the marks of maths\n");
    scanf("%d", &maths);
    printf("enter the marks of neuro\n");
    scanf("%d", &neuro);
    if((english+maths+neuro)/3 >=40 && english>33 && maths>33 && neuro>33){
        printf("Passed");
    }
    else{
        printf("Failed");
    }

       


    return 0;
}