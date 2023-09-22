#include<stdio.h>
int main(){
{
    int a[2][2] = {{},{}};
    for (int row=0; row<3;row++)
    {
        for(int col=0;col<=row;col++)
        {
            printf("* \t \t",a[row][col]);    
        }
    }
}

return 0;
}