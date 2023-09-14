#include<stdio.h>
int main(){

    int a;

    printf("Enter till what number you want to print value : ");
    scanf("%d",&a);

    for (int i = 1; i <=a; i++)
    {
        printf("%d\n",i);
    }
    
return 0;
}