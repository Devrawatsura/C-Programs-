#include<stdio.h>
int main()
{
    int Principal, Time, Rate;
    float Interest;
    printf("Enter the value of Principal:");
scanf("%d",&Principal);
     printf("Enter the value of Time:");
    scanf("%d",&Time);
     printf("Enter the value of Rate:");
     scanf("%d",&Rate);
     Interest=(Principal*Time*Rate)/ 100;
    printf("Interest is %f",Interest);
    return(0);
}