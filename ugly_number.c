#include <stdio.h>
//go to hache
//ugly number
int main() //醜數，尋找從0開始到多少醜數的數列
{
    int n, number = 2, cnt = 1;
    scanf("%d", &n);
    int a[n];
    a[0] = 1;
    if (n >= 1)
    {
        printf("%d,", a[0]);
    }
    for (int i = 2;; i++)
    {

        int c = i;
        while (c != 1)
        {
            if (c % 2 == 0)
                c = c / 2;
            else if (c % 3 == 0)
                c = c / 3;
            else if (c % 5 == 0)
                c = c / 5;
            else
                break;
        }
        if (c == 1)
        {
            printf("%d,", i);
            cnt++;
        }
        if (cnt == n)
        {
            printf("\b ");
            break;
        }
    }
}