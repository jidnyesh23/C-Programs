#include<stdio.h>
void accept(int arr[100][100], int m, int n);
void display(int arr[100][100], int m, int n);
void add(int A[100][100], int B[100][100], int m, int n);
void multiply(int A[100][100], int B[100][100], int m, int n, int o, int p);

int main(){
	int A[100][100], B[100][100], m, n, o, p;

	// Addition
	printf("Addition : \n");
	printf("Enter the dimensions of 1st Matrix : ");
	scanf("%d %d", &m, &n);
					
	printf("Enter the dimensions of 2nd Matrix : ");
	scanf("%d %d", &o, &p);

	if((m != o) || (n != p)){
		printf("Dimensions Should be Equal\n");
	}else{
		printf("Enter the elements of 1st Matrix : ");
		accept(A, m, n);
		display(A, m, n);

		printf("Enter the elements of 2nd Matrix : ");
		accept(B, o, p);
		display(B, o, p);
	
		add(A, B, m, n);
	}

	// Multiplication
	
	printf("Multiplication : \n");
	printf("Enter the dimensions of 1st Matrix : ");
	scanf("%d %d", &m, &n);
					
	printf("Enter the dimensions of 2nd Matrix : ");
	scanf("%d %d", &o, &p);

	if((m != p) || (n != o)){
		printf("Dimensions are invalid\n");
	}else{
		printf("Enter the elements of 1st Matrix : ");
		accept(A, m, n);
		display(A, m, n);

		printf("Enter the elements of 2nd Matrix : ");
		accept(B, o, p);
		display(B, o, p);

		multiply(A, B, m, n, o, p);
	}
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

void add(int A[100][100], int B[100][100], int m, int n){
	int C[100][100], i, j;

	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("Addition Matrix \n");
	display(C, m, n);
}

void multiply(int A[100][100], int B[100][100], int m, int n, int o, int p){
	int C[m][p], i, j, k;

	printf("Multiplication Matrix \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < p; j++){
			C[i][j] = 0;
			for(k = 0; k < o; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}

}

