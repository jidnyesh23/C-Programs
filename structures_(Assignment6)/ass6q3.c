#include <stdio.h>

struct library_book{
	int id;
	char title[20], publisher[20];
	int code;

	union u{
		int no_of_copies;
		char month[10];	
		int edition;
	}info;

	int cost;
};

int main(){
	int i, n, choice, total=0;
	printf("Enter the no of books: ");
	scanf("%d",&n);

	struct library_book book[n];

	//Getting The data
	for(i = 0; i < n; i++){
		printf("Enter the details of the book %d:\n",i+1);
		printf("Enter the id, title and publisher : ");
		scanf("%d %s %s",&book[i].id, book[i].title, book[i].publisher);

		printf("Enter the code: 1-Text Book, 2-Magazine, 3-Reference : ");
		scanf("%d",&book[i].code);

		switch(book[i].code){
			case 1: printf("Enter the number of copies: ");
				scanf("%d",&book[i].info.no_of_copies);
				break;

			case 2: printf("Enter the issue month name: ");
				scanf("%s",book[i].info.month);
				break;

			case 3: printf("Enter the edition number: ");
				scanf("%d",&book[i].info.edition);
				break;
		}

		printf("Enter the cost: ");
		scanf("%d", &book[i].cost);
	}

	//Menu
	do{
		printf("\nMenu: \n");
		printf("1. Display all reference books: \n");
		printf("2. Find the total cost of all books: \n");
		printf("Enter your choice (-1 to stop): ");
		scanf("%d",&choice);

		switch(choice){
			case 1: printf("The Reference Books are: \n");
				for(i = 0; i<n; i++){
					if(book[i].code == 3){
						printf("%s\n",book[i].title);
					}
				}
				break;

			case 2: for(i = 0; i<n; i++){
					total += book[i].cost;
				}
				printf("Total Cost of All Books is: %d\n",total);
		}

	}while(choice != -1);

	return 0;
}

