#include<stdio.h>
int main(){
    float principal,rate,years,SI;

    printf("Enter the Principal value:");
    scanf("%f",&principal);
    printf("Enter the number of years: ");
    scanf("%f",&years);
    printf("Enter the Rate: ");
    scanf("%f",&rate);

    SI=(principal*years*rate)/100;

    printf("The SI value is:%f",SI);
return 0;
}