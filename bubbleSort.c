#include <stdio.h>

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    int i,j,temp;
    for ( i = 0; i < n-1; i++){
        for ( j = 0; j < n-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[] = {7, 11, 9, 2, 17, 4};
    int n=7;
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}