#include<stdio.h>
int main(){

    float physics, chemistry, biology, mathematics, computer, percentage, total;

    printf("Enter Physics marks : ");
    scanf("%f",&physics);

    printf("Enter Chemistry marks : ");
    scanf("%f",&chemistry);

    printf("Enter Biology marks : ");
    scanf("%f",&biology);

    printf("Enter Mathematics marks : ");
    scanf("%f",&mathematics);

    printf("Enter Computer marks : ");
    scanf("%f",&computer);

    total=physics+chemistry+biology+mathematics+computer;
    percentage=(total/500)*100;

    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");99
        
    }
    else if (percentage >= 60)
    {
        printf("Grade C");
    }
    else if (percentage >= 50)
    {
        printf("Grade D");
    }
    else if (percentage >= 40)
    {
        printf("Grade E");
    }
    else if (percentage < 40)
    {
        printf("Grade F");
    }
    
    

return 0;
}