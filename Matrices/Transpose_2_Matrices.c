#include <stdio.h>
int main()
{
    int a[10][10], tra[10][10], r, c, i, j, k;

    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);
    printf("Enter the first matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Transpose  logic

    printf("Transpose of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            tra[i][j]=a[j][i];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", tra[i][j]);
        }
        printf("\n");
    }
    return 0;
}
