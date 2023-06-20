#include <stdio.h>
#include <string.h>
int main()
{
char str[10] = "ENIGNEER";
int  len = strlen(str);
for(int i=0; i<len; i++)
{
    for(int j=0; j<len-i; j++)
    {
        printf("%c", str[j]);
    }
    printf("\n");
}
return 0;
}