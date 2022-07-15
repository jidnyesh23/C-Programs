// Question 2

#include<stdio.h>
void accept(int arr[], int n);
void display(int arr[], int n);
void linearsearch(int arr[], int n, int key);
int main(){
	int arr[1000], n, key;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	accept(arr, n);
	display(arr, n);

	printf("Enter the element to search : ");
	scanf("%d", &key);

	linearsearch(arr, n, key);
	return 0;
}



void accept(int arr[], int n){
	int i;
	printf("Enter the elements of array : ");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
}

void display(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void linearsearch(int arr[], int n, int key){
	int i;
	for(i = 0; i < n; i++){
		if (arr[i] == key){
			printf("%d is found at index %d\n",key,i);
			break;
		}
	}
}

// Output 1

// Enter the size of array : 5
// Enter the elements of array : 1 2 3 4 5
// 1 2 3 4 5 
// Enter the element to search : 5
// 5 is found at index 4
                                                                                                                              
// Output 2

// Enter the size of array : 10
// Enter the elements of array : 1 2 3 4 5 6 7 8 5 64
// 1 2 3 4 5 6 7 8 5 64 
// Enter the element to search : 3
// 3 is found at index 2
