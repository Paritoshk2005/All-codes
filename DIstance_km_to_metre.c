#include<stdio.h>
int main(){
    float km,m,cm,feet,inch;
    printf("Enter your distance in km:");
    scanf("%f",&km);

    m=1000*km;
    cm=1000000*km;
    feet=3280*km;
    inch=39370*km;

    printf("The distance in m is:%f\n",m);
    printf("The distance in cm is:%f\n",cm);
    printf("The distance in feet is:%f\n",feet);
    printf("The distance in inch is:%f\n",inch);

return 0;
}