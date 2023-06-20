#include<stdio.h>
int main(){
    int c1,c2,r1,r2, mat1[12][12], mat2[12][12],mult[12][12],k,i,j;
    printf("Enter the order of first matrix");
    scanf("%d%d",&r1,&c1);
    printf("Enter the order of second matrix");
    scanf("%d%d",&r2,&c2);
    if (r1!=c2){
        printf("Multiply doen't exist those matrixs.");
    }
    else{
    
    printf("Input the data in first matrix:");
    for(i=0; i<r1;i++){
        for(j=0; j<c1; j++)
        {
        scanf("%d",&mat1[i][j]);
        }
    }
      printf("Input the data in second matrix:");
    for(i=0; i<r2;i++){
        for(j=0; j<c2; j++)
        {
        scanf("%d",&mat2[i][j]);
        }
    }

 for(i=0; i<r2;i++){
        for(j=0; j<c2; j++){
        mult[i][j]=0;
        for(k=0;k<c2; k++){
            mult[i][j]+= mat1[i][k] * mat2[k][j];
        }
   
        }
    }
    for(i=0; i<r1;i++){
        for(j=0; j<c2; j++)
        {
        printf("%d", mult[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}

