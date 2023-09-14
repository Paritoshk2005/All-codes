#include<stdio.h>
int main()
{
    int num1,num2,i,lcm;

    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);

    for(i=1; i <= num1 ; ++i)
    {
        lcm=num1*i;
        if(lcm%num2==0)
        {
            printf("lcm= %d",lcm);
            break;
        }
    }
    return 0;
}