#include <stdio.h>
#include<string.h>
#include<ctype.h> 
int length(char str[20]); void
upp(char str[20]); void
reverse(char str[20]); void
lower(char str[20]); int
main() {
char string[20];
int n;
printf("\nenter the string\n");
scanf("%s",string);
do
{
printf("\n choose the option\n");
scanf("%d",&n);
switch(n)
{
case 1: printf("\n the length of string is %d",length(string));
break;
case 2:printf("\n the reverse of string is ");
reverse(string); break;
case 3:printf("\n the upper case of string is ");
lower(string); break;
case 4:printf("\n the lowercase of string is ");
upp(string); break;
default: printf("\n choose correct option");
}
}
while(n<=4);
return 0; } 
int length(char str[20]) {
char *ptr; int len = 0;
ptr=str;
while(*ptr!='\0')
{
len=len+1;
ptr++; }
return len; } void
reverse(char str[20]) {
char *ptr,*rev,revstr[20];
int i,len=0,j=0; ptr=str;
rev=revstr;
while(*ptr!='\0') {
len=len+1;
ptr++; }
for(i=len-1; i>=0; i--)
{
ptr--;
*rev=*ptr;
rev++;
}
*rev='\0';
printf("%s",revstr);
}
void lower(char str[20])
{
char *p;
p = str;
while( *p )
{
*p = toupper(*p);
p++;
}
printf("%s",str);
}
void upp(char str[20])
{char *p;
p = str;
while( *p )
{
*p = tolower(*p);
p++;
}
printf("%s",str);
}
