#include <stdio.h>

int main(){
    int year;
    printf("Enter any year in 4 digits: ");
    scanf("%d", &year);
    if((year % 100 != 0 && year % 4 == 0) || year % 400 == 0){
        printf("Entered year is a leap year");
    } else{
        printf("Entered year is not a leap year");
    }
    return 0;
}