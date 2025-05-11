#include <stdio.h>
#include <string.h>

int countLen(char arr[]);

int main(){
    char name[100];  // Declaring a character array (string) with a maximum size of 100
    fgets(name, 100, stdin);  // Reading a string input from the user, including spaces (fgets prevents buffer overflow)
    printf("Length is %d", countLen(name));
    return 0;
    }


// Function to count the length of the string manually
int countLen(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){  // Loop through the array until the null character ('\0') is found
        count++;
    }
    return count-1;  // Return count - 1 to exclude the newline character (`\n`) added by fgets
}