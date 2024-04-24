#include<stdio.h>
int main(){
    float basicsalary,hra,da,ta;
    printf("Enter your Salary:");
    scanf("%f",&basicsalary);
    printf("Enter your hra:");
    scanf("%f",&hra);
    printf("Enter your da:");
    scanf("%f",&da);
    printf("Enter your ta:");
    scanf("%f",&ta);


    float HRA,DA,TA;
    HRA = (basicsalary * hra) / 100;
    DA = (basicsalary * da) / 100;
    TA = (basicsalary * ta)/100;

    float grosssalary = basicsalary+HRA+DA+TA;
    printf("%.1f", grosssalary);
    
    return 0;
}