#include<stdio.h>
int main(void)
{
    int i,n;
    int tableOf5[10];
    scanf("%d", &n);
    for ( i = 0; i < 10; i++)
    {
        tableOf5[i] = (i+1) * (n);
        printf("%dx%d = %d\n",n, i + 1, tableOf5[i]);
    }
    
    
    return 0;
}