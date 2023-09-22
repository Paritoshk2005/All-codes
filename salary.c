#include<stdio.h>
int main(){

    int basicsalary,gross_salary,salary_hra,salary_da;

    printf("Enter the basic salary of an employee : ");
    scanf("%d",&basicsalary);

    if (basicsalary<=10000)
    {
        salary_hra=(0.2*basicsalary);
        salary_da=(0.8*basicsalary);
        gross_salary=basicsalary+salary_hra+salary_da;
        printf("The gorss salary is %d",gross_salary);
    }
    else if(basicsalary<=20000){
        salary_hra=(0.25*basicsalary);
        salary_da=(0.9*basicsalary);
        gross_salary=basicsalary+salary_hra+salary_da;
        printf("The gorss salary is %d",gross_salary);
    }
    else if (basicsalary>20000)
    {
        salary_hra=(0.3*basicsalary);
        salary_da=(0.95*basicsalary);
        gross_salary=basicsalary+salary_hra+salary_da;
        printf("The gorss salary is %d",gross_salary);
    }
    
return 0;
