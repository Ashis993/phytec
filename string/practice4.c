#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30];
    int count=0;
    printf("input the string:");

    fgets(str,sizeof(str),stdin);
    while(str[count]!='\0')
    {
        if (str[count]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
  


}