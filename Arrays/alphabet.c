#include <stdio.h>

int main(){
    // Declare an array to store 52 characters (A-Z and a-z)
    char alpha[52];

    // Declare a pointer and assign it to the first element of the array
    char *ptr = alpha;

    // Storing uppercase letters (A-Z) in the array
    for(int i=0; i<26; i++){
        *(ptr + i) = 'A' + i;
    }

    // Storing lowercase letters (a-z) in the array
    for(int i=0; i<26; i++){
        *(ptr + 26 + i) = 'a' + i;
    }

    // Printing all the stored alphabets using pointer arithmetic
    for(int i=0; i<52; i++){
        printf("%c ", *(ptr+i));
    }
    return 0;
}