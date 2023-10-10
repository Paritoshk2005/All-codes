#include<stdio.h>
int main(){
    float length,breadth,radius,pi,Area_rectangle,Perimeter_rectangle,Area_circle,circumference;
    printf("Enter the length:");
    scanf("%f",&length);
    printf("Enter the breadth:");
    scanf("%f",&breadth);

    pi=3.14;
    Area_rectangle=length*breadth;
    printf("The Area of rectangle is %f\n",Area_rectangle);

    Perimeter_rectangle=2*(length+breadth);
    printf("The Perimeter of rectangle is %f\n",Perimeter_rectangle);

    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    circumference=2*pi*radius;
    printf("The circumference of the circle is:%f\n",circumference);

    Area_circle=pi*radius*radius;
    printf("The Area of the circle is:%f\n",Area_circle);

return 0;
}