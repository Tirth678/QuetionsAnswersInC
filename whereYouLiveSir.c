#include<stdio.h>
#include<string.h>
struct adress{
    int house_no;
    int block;
    char city[20];
    char state[20];

};
int main(void)
{
    struct adress India[200];
    printf("enter your house number\n");
    scanf("%d", &India[0].house_no);
    printf("enter your block number\n");
    scanf("%d", &India[0].block);
    printf("enter your city\n");
    scanf("%s", India[0].city);
    printf("enter your state\n");
    scanf("%s", India[0].state);



    return 0;
}