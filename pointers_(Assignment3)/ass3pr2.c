#include <stdio.h>

void even_odd_counter(int arr[], int n, int *even, int *odd);
void accept(int arr[], int n);

int main(){
    int n, arr[100], even = 0, odd = 0;

    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    accept(arr, n);

    even_odd_counter(arr, n, &even, &odd);

    printf("No. Of Even numbers : %d\nNo. Of Odd Numbers : %d\n", even, odd);

    return 0;
}


void even_odd_counter(int arr[], int n, int *even, int *odd){
    for(int i = 0; i < n; i++){
        if((arr[i] % 2) == 0)
		(*even)++;
	else
		(*odd)++;
    }
}

void accept(int arr[100], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
