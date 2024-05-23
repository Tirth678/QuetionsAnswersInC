// #include<stdio.h>
// int main(void)
// {
//     int i=1, sum=0;
    
//     while (i<=10)
//     {
//        sum +=i;
//        i++;
//         printf("%d", sum);
//     }
    

//     return 0;
// }

// while taking this as refrence
#include<stdio.h>
int main(void)
{
    int i=1, sum=0;
    do
    {
        sum += i;
        i++;
    } while (i <=10);
    printf("the sum of first 10 digits: %d", sum);
    

    return 0;
}