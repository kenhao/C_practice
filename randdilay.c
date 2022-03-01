#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 100;
    int sum = 0, input;
    srand((unsigned)(time(NULL)));
    while (n < 10 || n > 40)
    {
        n = rand();
    }
    printf("N = %d\n", n);
    while (sum < n)
    {
        printf("SUM = %d, ", sum);
        for (int n1 = 1; n1 < 4; n1++)
        {
            if ((n - sum - n1) % 4 == 1)
            {
                printf("computer add %d\n", n1);
                sum = sum + n1;
                break;
            }
            else if (n1 == 3 && (n - sum - n1) % 4 != 1)
            {
                printf("computer add %d\n", n1);
                sum = sum + n1;
            }
        }
        if (sum >= n)
        {
            printf("Computer LOSS!!");
            break;
        }
        while (1)
        {
            printf("SUM = %d, U add:", sum);
            scanf("%d", &input);
            if (input >= 4)
            {
                printf("ERROR! repeat input number\n");
                continue;
            }
            else
                break;
        }
        sum += input;
        if (sum >= n)
        {
            printf("YOU LOSS!!");
            break;
        }
    }
}