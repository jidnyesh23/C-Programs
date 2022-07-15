// Question 1

#include<stdio.h>
void accept(int arr[], int n);
void display(int arr[], int n);
void reversedisplay(int arr[], int n);

int main(){
	int arr[1000], n;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);

	accept(arr, n);
	display(arr, n);
	reversedisplay(arr, n);


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
	printf("Original Array : ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reversedisplay(int arr[], int n){
	int i;
	printf("Reversed Array : ");
	for(i = n-1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Output 1

// Enter the size of array : 5
// Enter the elements of array : 1 2 3 4 5 
// Original Array : 1 2 3 4 5 
// Reversed Array : 5 4 3 2 1 

// Output 2

// Enter the size of array : 10
// Enter the elements of array : 1 2 4 3 5 6 12 34 54 65
// Original Array : 1 2 4 3 5 6 12 34 54 65 
// Reversed Array : 65 54 34 12 6 5 3 4 2 1 
