#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter the value of n:\t");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
{
if (i%2!=0)
continue;
printf("%d\n",i);
}
return 0;
}