#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
main()
{
 int a,b,max,i,n,max1;
 printf("\nmaximum of two numbers\n ");
 printf("\nenter first number : \n");
 scanf("%d",&a);
 printf("\nenter second number : \n");
 scanf("%d",&b);
 max=MAX(a,b);
 printf("\nmaximum of two numbers is %d \n",max);
 
 printf("\nmaximum of n numbers\n");
 printf("how many numbers : ");
 scanf("%d",&n);
 printf("enter numbers : ");
 scanf("%d",&a);
 max1=a;
 for(i=1;i<n;i++)
 {
  scanf("%d",&a);
  max1=MAX(max1,a);
 }
 printf("\nmaximum of n numbers is %d \n",max1); 
}

/*
 
output

maximum of two numbers
 
enter first number : 
6

enter second number : 
7

maximum of two numbers is 7 

maximum of n numbers
how many numbers : 3
enter numbers : 7 8 9

maximum of n numbers is 9 

*/

