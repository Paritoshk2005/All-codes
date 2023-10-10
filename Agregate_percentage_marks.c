#include<stdio.h>
int main(){
    float Maths,Physics,chemistry,english,Sanskrit,Agregate,total,percentage;
    printf("Enter the marks in maths:");
    scanf("%f",&Maths);
    printf("Enter the marks in Physics:");
    scanf("%f",&Physics);
    printf("Enter the marks in chemistry:");
    scanf("%f",&chemistry);
    printf("Enter the marks in english:");
    scanf("%f",&english);
    printf("Enter the marks in Sanskrit:");
    scanf("%f",&Sanskrit);

    total=Maths+Physics+chemistry+english+Sanskrit;
    printf("Your Total marks are %f\n",total);

    Agregate=total/500;
    printf("Your Agregate marks are %.2f\n",Agregate);

    percentage=Agregate*100;
    printf("Your percentage is %f",percentage);

    
return 0;
}