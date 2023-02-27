/* C Program to Print Characters in a String */
#include <stdio.h>
int main()
{
    char str[100];
        
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("The Character at %d Index Position = %c \n", i, str[i]);
    }
    return 0;
}