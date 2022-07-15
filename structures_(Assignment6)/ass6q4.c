#include <stdio.h>

struct electronics{
	int id;
	char name[20];
	int code;
	int cost;
	
	union{
		struct {
			int size;
			int type;
		}tv;

		struct {
			int type;
			int model_number;
		}mobile;

		struct {
			int resolution;
			int model_number;
		}camera;
	}item;
};

int searchItem(struct electronics el[], int n, int id);

int main(){
	int i,n,choice,id;
	printf("Enter no of Items: ");
	scanf("%d",&n);

	struct electronics el[n];

	//Getting Data
	for(i=0; i<n; i++){
		printf("Enter Details of Item %d: \n",i+1);
		printf("Enter Item id, Company Name: ");
		scanf("%d %s", &el[i].id, el[i].name);
		printf("Enter Code (1-TV, 2-Mobile Phones, 3-Camera): ");
		scanf("%d",&el[i].code);
		printf("Enter the Cost: ");
		scanf("%d",&el[i].cost);

		switch(el[i].code){
			case 1: printf("Enter TV Size : ");
				scanf("%d",&el[i].item.tv.size);
				printf("Enter TV type (1-CRT, 2-LCD, 3-Plasma): ");
				scanf("%d",&el[i].item.tv.type);
				break;
			
			case 2: printf("Enter Mobile Phone Type (1-GSM, 2-CDMA) : ");
				scanf("%d",&el[i].item.mobile.type);
				printf("Enter Mobile Model Number: ");
				scanf("%d",&el[i].item.mobile.model_number);
				break;
			
			case 3: printf("Enter Camera Resolution: ");
				scanf("%d",&el[i].item.camera.resolution);
				printf("Enter Camera Model Number: ");
				scanf("%d",&el[i].item.camera.model_number);
				break;
		}	
	}

	do{
		printf("\nMenu: \n");
		printf("1. Display All: \n");
		printf("2. Search for Specific Item: \n");
		printf("Enter your choice (-1 to stop): ");
		scanf("%d",&choice);

		switch(choice){
			case 1: printf("\nDetails of All Electronics Items Are: \n");
				for(i = 0; i<n; i++){
					switch(el[i].code){
						case 1:	printf("\nTV Details:\n");
							printf("ID \t Company_Name \t Cost \t Code \t Size \t Type\n");
							printf("============================================================\n");
							printf("%5d %10s %10d %10d-TV ",el[i].id, el[i].name, el[i].cost, el[i].code);
							printf("%10d \t", el[i].item.tv.size);
							switch(el[i].item.tv.type){
								case 1: printf("%d-CRT\n",el[i].item.tv.type);
									break;
								case 2: printf("%d-LCD\n",el[i].item.tv.type);
									break;
								case 3: printf("%d-Plasma\n",el[i].item.tv.type);
									break;
							}
							break;

						case 2:	printf("\nMobile Phone Details: \n");
							printf("ID \t Company_Name \t Cost \t Code \t Model_number \t Type\n");
							printf("============================================================\n");
							printf("%5d %10s %10d %10d-Mobile ",el[i].id, el[i].name, el[i].cost, el[i].code);
							printf("%10d \t", el[i].item.mobile.model_number);
							switch(el[i].item.mobile.type){
								case 1: printf("%d-GSM\n",el[i].item.mobile.type);
									break;
								case 2: printf("%d-CDMA\n",el[i].item.mobile.type);
									break;
							}
							break;
						

						case 3:	printf("\nCamera Details:\n");
							printf("ID \t Company_Name \t Cost \t Code \t Resolution \t Model_number\n");
							printf("============================================================\n");
							printf("%5d %10s %10d %10d-Camera ",el[i].id, el[i].name, el[i].cost, el[i].code);
							printf("%10d %10d\n", el[i].item.camera.resolution, el[i].item.camera.model_number);
							break;

					}
				}
				break;

			case 2: printf("Enter Item id to search : ");
				scanf("%d",&id);
				
				if(searchItem(el, n, id)==1)
					printf("Item Found..\n");
				else
					printf("Item Not Found..\n");	
				break;
		}
		
	}while(choice != -1);
	return 0;
}

int searchItem(struct electronics el[], int n, int id){
	int i, flag = 0;
	for(i=0; i<n; i++){
		if(el[i].id == id)
			flag = 1;
			break;
	}
	return flag;
}

