#include<stdio.h>
int main(void){
    FILE *ptr;
    int i,num;
    ptr = fopen("Table.text", "w");
    printf("enter the value by which table will be generated\n");
    scanf("%d", &num);
    for ( i = 0; i < 10; i++)
    {
        fprintf(ptr, "%dX%d = %d\n", num, i+1, num*(i+1));
    }
    

    fclose(ptr);

    return 0;
}
// the table will be printed in the table.txt file.