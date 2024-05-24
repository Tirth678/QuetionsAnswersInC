#include<stdio.h>
int main(void)
{
    int i,j,k;
    int tableof729[30];
    for ( i = 0; i <10; i++)
    {
        tableof729[i] = 7 * (i + 1);
        printf("7X%d = %d\n", i+1, tableof729[i]);
    }


    for ( i = 0; i <10; i++)
    {
        tableof729[i] = 2 * (i + 1);
        printf("2X%d = %d\n\t", i+1, tableof729[i]);
    }


    for ( i = 0; i <10; i++)
    {
        tableof729[i] = 9 * (i + 1);
        printf("9X%d = %d\n\t\t", i+1, tableof729[i]);
    }
    return 0;
}