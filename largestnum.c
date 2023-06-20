#include<stdio.h>
int main()
{
    int a,b, largest;
    printf("Enter the first number:");
    scanf("%d",&a);
     printf("Enter the second number:");
    scanf("%d",&b);
    largest= a>b ? a: b ;
    
        printf("%d is the largest number. ",largest);
   
    return(0);
}