#include <stdio.h>

//Binary search function
int binary_search(int arr[], int low, int high, int key){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            return 1;
        }
        if(arr[mid]>key){
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return -1;
}

int main(){
    int arr[20], n, key, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements in the array: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &key);
    result = binary_search(arr, 0, n-1, key);
    if(result == -1){
        printf("Element %d is not present in the array", key);
    }
    else
        printf("Element %d is present in the array", key);
    return 0;
}