#include<stdio.h>
int main()
{int i, j, r=3,c=4,colSum=0,mat1[4][3]={1, 2, 3,
                          1,2,3,
                          1,2,3,
                          1,2,3      };

    for(j = 0; j < 3; j++) {
      colSum = 0;
      for(i = 0; i < 4; i++) {
         colSum += mat1[i][j];
      }
      printf("%d ", colSum);
   }
   printf("\n");

return 0;
}