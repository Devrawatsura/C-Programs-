#include<stdio.h>
int main()
{
    int num[10],i;
    printf("Enter the 10 value in a array");
    for(i=0; i<10; i++){
      printf("\nnum[%d]=",i);
      scanf("%d",&num[i]);

    }
for(i=0; i<10; i++){
      printf("\nnum[%d]=%d",i,num[i]);
}
return 0;
}

