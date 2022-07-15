#include <stdio.h>

struct student{
	int rollno;
	char name[20];
	int marks[3];
	float perc;
};

int main(){
	int i,j,n,choice,rollno,sum;
	printf("Enter no of Students: ");
	scanf("%d",&n);

	struct student s[n];

	for(i = 0; i < n; i++){
		printf("Enter Details of Student %d:\n",i+1);
		printf("Enter Rollno, Name : ");
		scanf("%d %s",&s[i].rollno, s[i].name);

		printf("Enter Marks of 3 subjects: ");
		sum = 0;
		for(j = 0; j<3; j++){
			scanf("%d", &s[i].marks[j]);
			sum += s[i].marks[j];
		}
		
		s[i].perc = (float)(sum)/3;

	}

	do{
		printf("Menu:\n");
		printf("1. Modify Student Details.\n");
		printf("2. Display all Students Details.\n");
		printf("3. Display all Students having percentage > 70.\n");
		printf("Enter your Choice (-1 to stop): ");
		scanf("%d",&choice);

		switch(choice){
			case 1: printf("Enter the Rollno of Student: ");
				scanf("%d",&rollno);
				for(i = 0; i<n; i++){
					if(s[i].rollno == rollno){
						printf("Enter New Details of Student:\n");
						printf("Enter Name : ");
						scanf("%s",s[i].name);

						printf("Enter Marks of 3 subjects: ");
						sum = 0;
						for(j = 0; j<3; j++){
							scanf("%d", &s[i].marks[j]);
							sum += s[i].marks[j];
						}
		
						s[i].perc = (float)(sum)/3;
					}
				}
				break;

			case 2: printf("Details of All Students: \n");
				printf("Rollno \t Name \t Marks( Sub1, Sub2, Sub3 ) \t Percentage");
				printf("\n==================================================================\n");
				for(i = 0; i < n; i++){
					printf("%d \t %s \t %d %10d %10d \t %10f\n",s[i].rollno, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].perc);
				}
				break;

			case 3: printf("Details of Students having percentage 70: \n");
				printf("Rollno \t Name \t Marks( Sub1, Sub2, Sub3 ) \t Percentage");
				printf("\n====================================================================\n");
				for(i = 0; i < n; i++){
					if(s[i].perc > 70){
						printf("%d \t  %s \t %d %10d %10d \t %10f\n",s[i].rollno, s[i].name,s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].perc);
					}
				}
				break;
		}

	}while(choice!=-1);

	return 0;
}

