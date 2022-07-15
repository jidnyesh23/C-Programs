// Question 5

#include<stdio.h>
void accept(int arr[], int n);
void display(int arr[], int n);
void find_intersection(int A[], int B[], int n);

int main(){
	int first[100], second[100], n;
	
	printf("Enter the size of arrays : ");
	scanf("%d", &n);
	
	accept(first, n);
	display(first, n);
	
	accept(second, n);
	display(second, n);	

	find_intersection(first, second, n);

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

void find_intersection(int A[], int B[], int n){
	int i,j, C[100], a=0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if (A[i] == B[j]){
				C[a++] = A[i];
			}
		}
	}
	printf("Elements of Intersection Array : ");
	display(C,a);
}

// Output

// Enter the size of arrays : 5
// Enter the elements of array : 1 3 4 6 7
// 1 3 4 6 7 
// Enter the elements of array : 1 4 5 8 9
// 1 4 5 8 9 
// Elements of Intersection Array : 1 4 