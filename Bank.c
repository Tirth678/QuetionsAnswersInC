#include<stdio.h>
#include<string.h>
struct bank{
    int account_number;
    int account_id;
    char password[50];
    char name[50];
    char branchName[200];
};
int main(void)
{
    struct bank SBI[5];
    printf("enter your account number.\n");
    scanf("%d", &SBI[0].account_number);
    printf("enter your account id:\n");
    scanf("%d", &SBI[0].account_id);
    printf("enter your password:\n");
    scanf("%s", SBI[0].password);
    printf("enter the name of the customer\n");
    scanf("%s", SBI[0].name);
    printf("from which branch are you contacting us?\n");
    scanf("%s", SBI[0].branchName);

    printf("Your account number is: %d\n", SBI[0].account_number);
    printf("Your account id is: %d\n", SBI[0].account_id);
    printf("Your account password is: %s\n", SBI[0].name);
    printf("Your name is: %s\n", SBI[0].password);
    printf("Your branch is: %s\n", SBI[0].branchName);
    


    return 0;
}