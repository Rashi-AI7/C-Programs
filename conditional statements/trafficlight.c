#include <stdio.h>

int main(){
    char light;
    printf("Enter the traffic light colour ('R' for Red 'G' for Green 'Y' for Yellow): ");
    scanf(" %c", &light);

    if(light >= 'a' && light <= 'z'){
        light = light - ('a' - 'A');
    }
    if (light == 'R'){
        printf("Stop!!\n");
    } else if (light == 'Y'){
        printf("Wait!!\n");
    } else if(light == 'G') {
        printf("Go!!\n");
    } else {
        printf("Invalid input! Please enter R, Y or, G\n");
    }
    return 0;
}