#include<stdio.h>
int main ()
{
    int num, temp;
    printf("Enter the Three digit number");
    scanf("%d",&num);
    printf("After the Reverse result is:");
    
    temp = num%10;
    
    printf("%d",temp);temp = num/10;
    temp= temp%10;
    printf("%d",temp);
     temp = num/10;
    temp= temp/10;
    printf("%d",temp);
    return 0;
}