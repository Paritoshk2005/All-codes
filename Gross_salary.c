#include<stdio.h>
int main(){
    float Basic,Gross,DA,HRA,DAP,HRAP;
    printf("Enter your Basic salary:");
    scanf("%f",&Basic);

    printf("Enter your DAP:");
    scanf("%f",&DAP);
    printf("Enter your HRAP:");
    scanf("%f",&HRAP);

    

    DA=Basic*DAP/100;
    printf("THe DA is %f\n",DA);
    HRA=Basic*HRAP/100;
    printf("THe HRA is %f\n",HRA);
    Gross=Basic+DA+HRA;
    printf("The Gross salary is:%f",Gross);

return 0;
}