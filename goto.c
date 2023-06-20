#include<stdio.h>
int main()
{
    int i, num1, num2;
    printf("Enter the value of num1:\n");
    scanf("%d",&num1);
    if(num1<0)
     goto negative;
    printf("Enter the value of num2:\n");
    scanf("%d",&num2);
    if(num2<0)
        goto negative;
    printf("Both number are positive");
    return 0;
    negative: 
    printf("Either one of the number is negative");
    return(0);
}