#include<stdio.h>
void accept(int arr[100][100], int m, int n);
void display(int arr[100][100], int m, int n);
void transpose(int arr[100][100], int arr1[100][100], int m, int n);

int main(){
	int A[100][100], B[100][100], m, n;

	printf("Enter the dimensions of array : ");
	scanf("%d %d", &m, &n);

	printf("Enter the elements of array : ");
	accept(A, m, n);
	printf("Original Matrix : \n");
	display(A, m, n);
	transpose(A, B, m, n);
	printf("Transpose of Matrix : \n");
	display(B, n, m);

	return 0;
}

void accept(int arr[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

}

void display(int arr[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}


void transpose(int arr[100][100], int arr1[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr1[j][i] = arr[i][j];
		}
	}
}
