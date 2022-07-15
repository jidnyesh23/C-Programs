// Question 4

#include<stdio.h>
void accept(int arr[], int n);
void display(int arr[], int n);
void bubblesort(int arr[], int n);
int main(){
	int arr[1000], n, key;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	accept(arr, n);
	display(arr, n);

	bubblesort(arr, n);
	
	display(arr, n);
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

void bubblesort(int arr[], int n){
	int i, j, temp;
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if (arr[j] < arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
					
			}
		}
	}
}


// Output 

// Enter the size of array : 5
// Enter the elements of array : 3 5 2 1 4
// 3 5 2 1 4 
// 1 2 3 4 5 