#include<stdio.h>
void accept(int arr[100][100], int m, int n);
void display(int arr[100][100], int m, int n);
void sum(int arr[100][100], int m, int n);

int main(){
	int A[100][100], B[100][100], m, n;

	printf("Enter the dimensions of array : ");
	scanf("%d %d", &m, &n);

	printf("Enter the elements of array : ");
	accept(A, m, n);
	printf("Original Matrix : \n");
	display(A, m, n);
	sum(A, m, n);
	printf("Result\n");
	display(A, m+1, n+1);
	return 0;
}

void accept(int arr[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

}

void sum(int arr[100][100], int m, int n){
	int sum, i, j;
	//row sum
	for(i = 0; i < m; i++){
		sum = 0;
		for(j = 0; j < n; j++){
			sum += arr[i][j];
		}
		arr[i][j] = sum;
	}
	//column sum

	for(i = 0; i < m+1; i++){
		sum = 0;
		for(j = 0; j < n; j++){
			sum += arr[j][i];
		}
		arr[j][i] = sum;
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


