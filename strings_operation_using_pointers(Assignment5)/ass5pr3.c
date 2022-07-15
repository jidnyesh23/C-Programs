#include <stdio.h>
#include<string.h>
char *substring(char *str,int start,int end);
int main()
{
char string[30],substr[20];
int start,end;
printf("enter the string\n");
scanf("%s",string);
printf("\n enter the start of string\n");
scanf("%d",&start);
printf("\n enter the end of string\n");
scanf("%d",&end);
printf("\n The string %s from %d podtion to %d position is ",string,start,end);
substring(string,start,end);
return 0; }
char *substring(char *str,int start,int end)
{ char
str1[20]; int
i,j=0;
for(i=start; i<=end; i++)
{
str1[j]=str[i];
j++;
} printf("%s",str1);
}
