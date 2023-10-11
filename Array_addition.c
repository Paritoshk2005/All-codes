#include<stdio.h>
int main(){

    int sum=0;
    int arr[10]={1,5,3,6,3,9,10,12,12,12};
    for (int i = 0; i < 10; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);


return 0;
}