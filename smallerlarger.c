#include<stdio.h>

int main(){
    double op1 , op2;
    printf("Enter op1 : \n ");
    scanf("%lf \n ",op1);
    printf("Enter op2 : \n");
    scanf("%lf \n" ,op2);

    if(op1>op2){
        printf("the larger number is %lf \n", op1);
    }
    else if(op2>op1)
    {
        printf("the larger number is %lf \n", op2);
    }
    else
    {
        printf("the number are equal");
    }
    return 0;

} 