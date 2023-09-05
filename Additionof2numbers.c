#include<stdio.h>

int main ()
{
    int a,b,res;
    printf("Enter a number a : \n");// \n is for the cursor to go in the next line 
    scanf("%d", &a);// & is the  adress of the operator 

    printf("Enter a number b : \n");
    scanf("%d", &b);
    res=a+b;
    printf("The sum of %d+%d=%d\n", a,b,res);
    return 0;
    }