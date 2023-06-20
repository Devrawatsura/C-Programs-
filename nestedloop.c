#include<stdio.h>
int main()
{
    int i, j, temp;
    for(i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++ ){
            printf("\t1");
        }
        printf("\n ");
    }
    return (0);
}