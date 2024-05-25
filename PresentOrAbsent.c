// #include<stdio.h>
// #include<string.h>
// int main(void)
// {   
//     char gen[] = "Hello";
//     printf("%d", strlen(gen)); 

//     return 0;
// }
// this is my version of strlen

// int my_strlen(char *str) {
//     int length = 0;
//     while (*str != '\0') {
//         length++;
//         str++;
//     }
//     return length;
// }
// this is a version of chatgpts sterlin

#include<stdio.h>
#include<string.h>
int my_strcpy(char *str);
int main(void)
{
    int *str;
    scanf("%s", str);
    printf("%s", str);
    
    return 0;
}
int my_strcpy(char *str){
        int length = 0;
        while(*str != '\0'){
            length++;
            str++; // Added missing semicolon
            
        }
    }