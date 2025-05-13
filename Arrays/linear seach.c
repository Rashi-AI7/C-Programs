#include <stdio.h>

int main(){
    int arr[10], n, key, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements in the array: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++){
        if(arr[i] ==  key){
            printf("Element %d is found ", key);
            found = 1;
            break;
            
        }
    }
    if (!found){
            printf("Element %d is not found ", key);
        }
    return 0;
}