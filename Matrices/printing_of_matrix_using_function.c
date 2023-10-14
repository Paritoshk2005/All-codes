#include<stdio.h>

void display(int m, int n, double matA[m][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%0.1lf\t ",matA[i][j]);
        }
        printf("\n");
    }
}

void get(int m, int n, double a[m][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter row and coloum [%d][%d] : ",i,j);
            scanf("%lf",&a[i][j]);
        }
    }
}

int main(){
    int m,n;
    printf("enter number of row : ");
    scanf("%d",&m);

    printf("\n");

    printf("enter number of col : ");
    scanf("%d",&n);

    double a[m][n];

    get(m,n,a);
    

    printf("\n");

    display(n,m,a);
    

return 0;
}