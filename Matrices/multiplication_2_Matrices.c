#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], res[10][10], r, c, i, j, k;

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
    printf("Enter the second matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Multiplication logic

    printf("Multipliction of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
