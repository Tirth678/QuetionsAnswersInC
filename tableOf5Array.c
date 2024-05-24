#include<stdio.h>
int main(void)
{
    int i;
    int tableOf5[10];
    for ( i = 0; i < 10; i++)
    {
        tableOf5[i] = 5 * (i + 1);
        printf("5x%d = %d\n", i + 1, tableOf5[i]);
    }
    
    
    return 0;
}