#include<stdio.h>
int main()
{
    int a, b, c, d, e, sum;
    printf("Enter the value of first integer:");
    scanf("%d",&a);
    printf("Enter the value of second integer:");
    scanf("%d",&b);
     printf("Enter the value of third integer:");
    scanf("%d",&c);
     printf("Enter the value of fourth integer:");
    scanf("%d",&d);
 printf("Enter the value of fifth integer: ");
    scanf("%d",&e);
sum=a+b+c+d+e;
printf("The sum of %d,%d,%d,%d and %d is%d",a,b,c,d,e,sum);

    return(0);
}