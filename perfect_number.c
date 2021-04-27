#include <stdio.h>

int main() //完美數 perfect number
{
    int n;
    int sum = 0, cnt = 0;

    printf("Please input a number:");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d,", i);
            cnt++;
        }
        sum = 0;
    }
    printf("\nThere are %d perfect number!!", cnt);
}