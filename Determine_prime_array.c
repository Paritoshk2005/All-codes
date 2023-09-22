#include<stdio.h>
int main(){
    int x,a[20];
    printf("Enter the size of the array: ");
   scanf("%d", &x);

   printf("Enter array elements: \n");
   for(int i=0; i<x; i++)
   {
    scanf("%d",&a[i]);
   }
    printf("The prime numbers in the array are: \n");
    for(int i=0; i<x; i++)
    {
        for(int j=2;j<=a[i]/2 +1; j++)
        {
            if(a[i]%j!=0)
            {
                printf("%d is prime\n",a[i]);
            }
            else
            {
                printf("%d is not prime\n",a[i]);
                break;
            }
        }
    }
return 0;
}