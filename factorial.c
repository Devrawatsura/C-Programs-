#include<stdio.h>
int main ()
{
    int fact=1, C=1, num;
    printf("Enter the value of num:");
    scanf("%d", &num);
    while(C<=num)
    {
        fact = fact*C;
        C= C+1;
    }
    printf("%d",fact);
      return(0);
}