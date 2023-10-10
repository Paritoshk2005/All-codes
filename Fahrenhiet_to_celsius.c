#include<stdio.h>
int main(){
   float F, C;

   printf("Enter your temp in Fahrenheit:");
   scanf("%f",&F);

   C = (F - 32)*5/9;
   printf("Your temp in Celsius is: %f", C);
   return 0;
}