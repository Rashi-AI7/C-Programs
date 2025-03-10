#include <stdio.h>

int main(){
    float m1, m2, m3, m4 ,m5;
    printf("Enter your marks in 5 subjects out of 100: ");
    scanf(" %f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    float sum = m1+ m2+ m3+ m4+ m5;
    float per = (sum/500)*100;
    if (per <= 100 && per > 90){
        printf("Grade: A1\n");
        printf("Grade point: 10\n");
    } else if (per <= 90 && per > 80){
        printf("Grade: A2\n");
        printf("Grade point: 9\n");
    } else if (per <= 80 && per > 70){
        printf("Grade: B1\n");
        printf("Grade point: 8\n");
    } else if (per <= 70 && per > 60){
        printf("Grade: B2\n");
        printf("Grade point: 7\n");
    } else if (per <= 60 && per > 50){
        printf("Grade: C1\n");
        printf("Grade point: 6\n");
    } else if (per <= 50 && per > 40){
        printf("Grade: C2\n");
        printf("Grade point: 5\n");
    } else{
        printf("You're failed\n");
    }
    return 0;
}