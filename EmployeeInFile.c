#include<stdio.h>
int main(void)
{
    FILE *fptr;
    fptr = fopen("employe.text", "w");
    int a1 = 3300;
    int a2 = 7700;
    char* c1 = "name1";
    char* c2 = "name2";
     fprintf(fptr, "%s : %d\n %s : %d", c1, a1, c2, a2);
    return 0;
}