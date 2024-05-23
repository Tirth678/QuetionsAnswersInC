#include<stdio.h>
int main(void)
{
    int i, factorial = 1;
    printf("Enter the value of the factorial: ");
    scanf("%d", &i);
    
    for (int j = 1; j <= i; j++)
    {
        factorial *= j;
    }
    
    printf("Factorial of %d is: %d", i, factorial);
   
    
    return 0;
}