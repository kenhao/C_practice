#include <stdio.h>

int main() //矩陣相乘
{
    int n;
    printf("please input the size of matrix:");
    scanf("%d", &n);
    int m1[n][n];
    int m2[n][n];
    int r[n][n];
    printf("please input matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("please input matrix2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("matrix1 * matrix2:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                r[i][j] = r[i][j] + (m1[i][k] * m2[k][j]);
            }
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
}