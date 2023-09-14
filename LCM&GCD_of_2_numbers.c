#include<stdio.h>
int main()
{
    int a, b, greater, smaller, i,temp;
    printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        greater=a;
        smaller=b;
    }
    else
    {
        greater=b;
        smaller=a;
    }
    for (i=1;i<=smaller;i++)
    {
        temp=greater*i;
        if (temp%smaller==0)
        {
            break;
        }
        
    }
    printf("\n%d is LCM of (%d,%d)",greater*i,a,b);
    
    for (int i=1;i<=smaller;i++)
    {
        if ((smaller%i)==0)
        {
            temp=(smaller/i);
            if (greater%temp==0)
            {
                break;
            }
            
        }
        else
        {
            continue;
        }
    }
    printf("\n%d is GCD of (%d,%d)",smaller/i,a,b);
    
    return 0;
}