#include<stdio.h>
#include "mymacros.h"
int main()
{
int sqr1,sqr2,sqr3,cube1,cube2,cube3,greater2_1,greater2_2,greater2_3,greater3;
int x,y,z;

printf("\nENTER THE VALUE OF X : \n");
scanf("%d",&x);
printf("\nENTER THE VALUE OF Y : \n");
scanf("%d",&y);
printf("\nENTER THE VALUE OF Z : \n");
scanf("%d",&z);

sqr1=SQR(x);
sqr2=SQR(y);
sqr3=SQR(z);
printf("\nSQUARE OF %d(X) = %d \n",x,sqr1);
printf("\nSQUARE OF %d(Y) = %d \n",y,sqr2);
printf("\nSQUARE OF %d(Z) = %d \n",z,sqr3);

cube1=CUBE(x);
printf("\nCUBE OF %d(X) = %d \n",x,cube1);
cube2=CUBE(y);
printf("\nCUBE OF %d(Y) = %d \n",y,cube2);
cube3=CUBE(z);
printf("\nCUBE OF %d(Z) = %d \n",z,cube3);

greater2_1=GREATER2(x,y);
printf("\nGREATER BETWEEN %d(X) AND %d(Y) IS %d\n",x,y,greater2_1);
greater2_2=GREATER2(x,z);
printf("\nGREATER BETWEEN %d(X) AND %d(Z) IS %d\n",x,z,greater2_2);
greater2_3=GREATER2(y,z);
printf("\nGREATER BETWEEN %d(Y) AND %d(Z) IS %d\n",y,z,greater2_3);

greater3=GREATER3(x,y,z);
printf("\nGREATES BETWEEN %d(X), %d(Y),%d(Z)  IS %d\n",x,y,z,greater3);

return ;
}







/*
 output

ENTER THE VALUE OF X : 
3

ENTER THE VALUE OF Y : 
4

ENTER THE VALUE OF Z : 
5

SQUARE OF 3(X) = 9 

SQUARE OF 4(Y) = 16 

SQUARE OF 5(Z) = 25 

CUBE OF 3(X) = 27 

CUBE OF 4(Y) = 64 

CUBE OF 5(Z) = 125 

GREATER BETWEEN 3(X) AND 4(Y) IS 4

GREATER BETWEEN 3(X) AND 5(Z) IS 5

GREATER BETWEEN 4(Y) AND 5(Z) IS 5

GREATES BETWEEN 3(X), 4(Y),5(Z)  IS 5

*/

