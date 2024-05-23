#include<stdio.h>
int main(void)
{
    int i;
    for ( i = 0; i<10; i--)
    {
        printf("5X%d = %d\n", i, 5*(i));
        if(i == -10){
            break;
        }
        
    }
    

    return 0;
}