#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[20],str2[20];
    int ch,i,j;
    do
    {
        printf("\tMENU");
        printf("\n------------------------------\n");
        printf("\n1:Copy String ");
        printf("\n2:Concatenate Strings");
        printf("\n3:Compare Strings");
        printf("\n6:Exit");
        printf("\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
		case 1:
                printf("Enter a String1: ");
                scanf("%s",str1);
                printf("Enter a String2: ");
                scanf("%s",str2);
                printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n",str1,str2);
                strcpy(str2,str1);
                printf("-----------------------------------------------\n");
                printf("\"We are copying string String1 to String2\" \n");
                printf("-----------------------------------------------\n");
                printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n",str1,str2);
            break;	
            case 2:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("Enter Second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("String After Concatenation : %s\n\n",str1);
            break;
            case 3:
                printf("Enter First String: ");
                scanf("%s",str1);
                printf("Enter Second String: ");
                scanf("%s",str2);
                j=strcmp(str1,str2);
                if(j==0)
                {
                    printf("Strings are Same\n\n");
                }
                else
                {
                    printf("Strings are Not Same\n\n");
                }
            break;
            case 4:
                exit(0);
            break;
            default:
                printf("Invalid Input. Please Enter valid Input.\n\n ");
        }
    }while(ch!=4);
    return 0;
}
