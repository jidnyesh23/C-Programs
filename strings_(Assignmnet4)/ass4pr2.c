 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, Flag;
  	Flag = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Flag++;
			break;    	
 		}
	}
    if(Flag == 0)
  	{
  		printf("\n Sorry!! We haven't found the Search Character '%c' ", ch);
	}
	else
	{
		printf("\n The First Occurrence of the Search Element '%c' is at Position %d ", ch, i + 1);
	}	
  	return 0;
}
