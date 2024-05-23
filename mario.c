#include<stdio.h>
int main(void)
{
    int i,j,k,n;
    printf("enter the no. of stars you want to print ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j < j-1 ; j++)
        {
            printf(" ");
        }
        for ( k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    

    return 0;
}