#include<stdio.h>
int main(void)
{
    int i,n,m;
    int damn[10];
    scanf("%d", &n);
    scanf("%d", &m);
    // for ( i = 0; i < 10; i++)
    // {
    //      damn[i] = 4 * (i + 1);
    //     printf("4x%d = %d\n", i+1, damn[i]);
    // }
    // for ( i = 0; i < 10; i++)
    // {
    //      damn[i] = 4 * (i + 1);
    //     printf("4x%d = %d\n", i+1, damn[i]);
    // }
    for ( i = 0; i < 10; i++)
    {
         damn[i] = (n) * (i+1);
        printf("%dx%d = %d\n",n,i+1, damn[i]);
    }

    for ( i = 0; i < 10; i++)
    {
         damn[i] = (m) * (i+1);
        printf("%dx%d = %d\n",m,i+1, damn[i]);
    }
    

    return 0;
}