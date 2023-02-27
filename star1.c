#include <stdio.h>
int main()
{
int n,i,j,p=1;
printf("Enter the number of row:");
scanf("%d",&n);

for ( i = 1; i <=n; i++)
{
    for (j = 1; j <=i; j++)
    printf("%4d",i);
    printf("\n"); 
    
}
    return 0;
}