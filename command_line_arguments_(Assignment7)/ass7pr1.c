#include<stdio.h>
void main(int argc,char *argv[])
{
 int i,max,min,sum,avg;
 max=atoi(argv[1]);
 for(i=2;i<argc;i++)
 {
  if(atoi(argv[i])>max)
  {
   max=atoi(argv[i]);
  }
 }
 printf("\n maximum number is : %d \n",max);
 min=atoi(argv[1]);
 for(i=2;i<argc;i++)
 {
  if(atoi(argv[i])<min)
  {
   min=atoi(argv[i]);
  }
 }
 printf("\n minimum number is : %d \n",min);
 sum=atoi(argv[1])+atoi(argv[2])+atoi(argv[3]);
 avg=sum/3;
 printf("\n avg of 3 number is %d\n",avg);
}


/*
 
output

[fycsd004@ad-103 assignment6-commandlines]$ ./a.out 1 2 3

 maximum number is : 3 

 minimum number is : 1 

 avg of 3 number is 2

*/

