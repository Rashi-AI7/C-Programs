#include <stdio.h>
#include <math.h>

int main(){
    int num, remain, n=0, result=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    int orignum = num;
    while (orignum != 0){
        orignum /= 10;
        n++;
    }
        orignum = num;
        result = 0;

    while(orignum!=0){
        remain = orignum % 10;
        result += (int)(pow(remain, n) + 0.5);
        orignum /= 10;
        }

    if(result == num){
        printf("%d is an Armstrong number", num);
    } else {
        printf("%d is not an Armstrong number", num);
    }
    return 0;
}