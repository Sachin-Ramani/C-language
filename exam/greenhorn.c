#include<stdio.h>
int main(){
    float celsius;
    printf("tempreture from degree:");
    scanf("%f",&celsius);
    float tapman = (celsius * 1.8) + 32;
    printf("tapman :%f", tapman);
    return 0;
}