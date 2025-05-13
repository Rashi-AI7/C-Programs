#include <stdio.h>

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[minIdx]){
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main(){
    int arr[10], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements in the array: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    selection_sort(arr, n);
    printf("Sorted array: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}