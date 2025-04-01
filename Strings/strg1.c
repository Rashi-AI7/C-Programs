#include <stdio.h>
#include <string.h>

int countLen(char arr[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is %d", countLen(name));
    return 0;
    }

int countLen(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}