#include<stdio.h>
int main (){
    int a,b;
    printf("Enter value of a: \n");
    scanf("%d",&a);

    printf("Enter value of b: \n");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The value of a is %d : ",a);
    printf("The value of b is %d : ", b);
    return 0;
}