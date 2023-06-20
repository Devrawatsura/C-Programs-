#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
struct student {
    char name[22];
     int rollno;
     int marks;
     float percentage;

}std[22];  
int i;
FILE *fptr;
fptr=fopen("student.txt","wb");
if (fptr==NULL)
{
    printf("File doesn't created");
    exit(1);
}
printf("Enter the information of student:\n");
for( i=0; i<20; i++){

printf("Enter the student  name [%d] , Student [%d]rollno, Student[%d]marks andStudent[%d] percentage respectively./\n",i+1,i+1,i+1,i+1);
scanf("%s%d%d%f",&std[i].name,&std[i].rollno,&std[i].marks,&std[i].percentage);

}
printf("Writing information for student");
fwrite(std,sizeof(struct student), 20,fptr);
rewind(fptr);
printf("Reading information for student");
fread(std,sizeof(struct student), 20,fptr);
for( i=0; i<20; i++)
{
    if(std[i].marks>50 && std[i].marks<80){

printf("Student[%d] name:%s\n Student [%d] rollno:%d\n Student [%d] marks:%d \nand Student[%d] percentage:%f\n",i+1,std[i].name,i+1,std[i].rollno,i+1,std[i].marks,i+1,std[i].percentage);
    }
}
fclose(fptr);
return 0;
}