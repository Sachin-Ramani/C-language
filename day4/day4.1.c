#include<stdio.h>
int main(){
    int a;
    printf("any number");
    scanf("%d",&a);
    
    if(a<0){
        printf("Negative Number");
    } else if (a>0){
        printf("Positive Number");
    } else{
        printf("Neutral Number");
    }
    return 0;
}