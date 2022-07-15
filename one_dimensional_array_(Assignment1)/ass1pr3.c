// Question 3

#include<stdio.h>
void accept(int arr[], int n);
void display(int arr[], int n);
void find_occurrences(int arr[], int n, int num);

int main(){
	int arr[1000], n, num;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	accept(arr, n);
	display(arr, n);

	printf("Enter the element whose occurrence is to be found: ");
	scanf("%d", &num);

	find_occurrences(arr, n, num);
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

void find_occurrences(int arr[], int n, int num){
	int i, count=0;
	for(i = 0; i < n; i++){
		if (arr[i] == num){
			count++;
		}
	}
	printf("%d occurrs %d times\n",num,count);
}

// Output 1

// Enter the size of array : 5
// Enter the elements of array : 1 2 3 4 5
// 1 2 3 4 5 
// Enter the element whose occurrence is to be found: 4
// 4 occurrs 1 times
                                                                                                                              
// Output 2

// Enter the size of array : 10 
// Enter the elements of array : 2 2 3 4 5 6 6 6 6 1    
// 2 2 3 4 5 6 6 6 6 1 
// Enter the element whose occurrence is to be found: 6
// 6 occurrs 4 times
