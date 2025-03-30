#include <stdio.h>

//power function

void printPower(int n, int i);

int main(){
    float n,i;
    printf("Enter the base and the power it is to be raised: ");
    scanf("%f %f", &n, &i);
    printPower(n, i);
    return 0; 
}

void printPower(int n, int i){
    if(i==0){
        printf("1");
    } else{
        int result = 1;
        int exp = i;
        while (i--){
            result *= n;  
            }
        printf("%d^%d = %d", n,exp,result);
    }
}
    