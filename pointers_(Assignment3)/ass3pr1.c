#include <stdio.h>

void reverse_display(int arr[], int n);
void accept(int arr[], int n);

int main(){
    int n, arr[100];

    printf("Enter size of array : ");
    scanf("%d",&n);
    accept(arr, n);
    reverse_display(arr, n);

    return 0;
}


void reverse_display(int arr[], int n){
    int i, *ptr = &arr[n-1];
    for(i = 0; i<n; i++){
        printf("%d\t",*(ptr - i));
    }
}

void accept(int arr[100], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
