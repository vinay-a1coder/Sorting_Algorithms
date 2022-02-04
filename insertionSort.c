#include <stdio.h>

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n){
    int i,j,key;
    for(i=1; i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {4, 1, 7, 2};
    int n = 4;
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}