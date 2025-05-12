#include<stdio.h>

int main(){
    int arr[10], n, curr, prev;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements in the array: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Insertion sort algorithm
    for(int i=1; i<n; i++){
        curr = arr[i];
        prev = i-1;
        while(prev>=0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    printf("Sorted array: \n");
    for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
    }
    return 0;
}
