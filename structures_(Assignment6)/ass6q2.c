#include <stdio.h>
#include <string.h>

struct employee{
	int id;
	char name[20];
	float salary;
};

int searchByName(struct employee emp[], int n, char *name);
int searchByID(struct employee emp[], int n, int id);

int main(){
	int i, n, choice, id;
	float max = 0;
	char name[20];
	printf("Enter no of Employees: ");
	scanf("%d",&n);
	
	struct employee emp[n], maxemp;

	for(i = 0; i < n; i++){
		printf("Enter Details of Employees %d: \n",i+1);
		printf("Enter Employee id, name, Salary: ");
		scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
	}
	
	do{
		printf("\nMenu: \n");
		printf("1. Search by name: \n");
		printf("2. Search by id: \n");
		printf("3. Display all employees having salary > 100000: \n");
		printf("4. Display employee having maximum salary: \n");
		printf("Enter your choice (-1 to stop): \n");
		scanf("%d",&choice);

		switch(choice){
			case 1: printf("Enter Employee name to Search: ");
				scanf("%s",name);
				if(searchByName(emp, n, name) == 1)
					printf("Employees Found..\n");
				else
					printf("Employees Not Found..\n");
				break;

			case 2: printf("Enter Employee id to Search: ");
				scanf("%d",&id);
				if(searchByID(emp, n, id) == 1)
					printf("Employees Found..\n");
				else
					printf("Employees Not Found..\n");
				break;

			case 3: printf("Details of all employees having salary > 100000: \n");
				printf("\n ID \t Name \t Salary \n");
				printf("==================================\n");
				for(i=0;i<n;i++){
					if(emp[i].salary > 100000){
						printf("%5d %10s %10.2f\n",emp[i].id, emp[i].name, emp[i].salary);
					}
				}
				break;
			
			case 4: printf("Detail of all employees having Maximum salary: \n");
				printf("\n ID \t Name \t Salary \n");
				printf("==================================\n");
				for(i=0;i<n;i++){
					if(emp[i].salary > max){
						max = emp[i].salary;
						maxemp.id = emp[i].id;
						strcpy(maxemp.name, emp[i].name);
						maxemp.salary = emp[i].salary;

					}
				}
				
				printf("%5d %10s %10.2f\n",maxemp.id, maxemp.name, maxemp.salary);
				break;
		}
	}while(choice!=-1);

	return 0;
}


int searchByName(struct employee emp[], int n, char *name){
	int i;
	for(i = 0; i < n; i++){
		if(strcmp(emp[i].name, name)==0)
			return 1;
	}
	return 0;
}

int searchByID(struct employee emp[], int n, int id){
	int i;
	for(i = 0; i < n; i++){
		if(emp[i].id == id)
			return 1;
	}
	return 0;
}
