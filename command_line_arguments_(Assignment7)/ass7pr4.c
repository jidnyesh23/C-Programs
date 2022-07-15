#include<stdio.h>
#include<string.h>
#define CMP(a,b) a>b?1:0

void sort(char *s, int i);

int main(int argc, char *argv[])
{
 char *t = argv[1];
 int i = atoi(argv[2]);

 if(--argc <= 2)
 {
  sort(t, i);
  printf("The Sorted string is : %s\n",t);
 }
 else
 {
  printf("More than 2 Arguments Passed. Please give 2 arguments or less..\n");
 }
 return 0;
}

void sort(char *s, int n)
{
 int i,j;
 char temp;
 if(n == 0)
 {
  for(i = 0; i<strlen(s)-1; i++)
  {
   for(j = i+1; j<strlen(s); j++)
   {
    if(CMP(s[i],s[j]))
    {
     temp = s[i];
     s[i] = s[j];
     s[j] = temp;
    }
   }
  }
 }
 else if(n == 1)
 {
  for(i = 0; i<strlen(s)-1; i++)
  {
   for(j = i+1; j<strlen(s); j++)
   {
    if(CMP(s[j],s[i]))
    {
     temp = s[i];
     s[i] = s[j];
     s[j] = temp;
    }
   }
  } 
 }
}



/*
 output

[fycsd004@ad-103 assignment6-commandlines]$ ./a.out computer 0
The Sorted string is : cemoprtu
[fycsd004@ad-103 assignment6-commandlines]$ ./a.out computer 1
The Sorted string is : utrpomec


*/
	
