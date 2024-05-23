#include<stdio.h>
int main(void)
{
    int principle;
    int no_of_years;
    int intrest;
    printf("enter the amount of principle\n");
    scanf("%d", &principle);
    printf("enter the value of no, of years\n");
    scanf("%d", &no_of_years);
    printf("enter the amount of intrest\n");
    scanf("%d", &intrest);
    printf("your simple intrest is: %i", (principle+no_of_years+intrest)/3);

    return 0;
}