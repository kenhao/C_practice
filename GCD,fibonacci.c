
#include <stdio.h>

int GCD(int, int);
int f(int);
int main(int argc, const char *argv[])
{

    /*int n; //no.1
    int result, k;// k為控制變數
    int total = 0;
    printf("please input a number:");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        k = 0;
        for (int j = 2;j < i ; j++)
        {
            result = i %j;
            //printf("result:%d\n", result);
            if (result == 0)
                k++;
        }
        if (k == 0)
        {
            printf("%d, ", i);
            total++;
        }
    }
    printf("Total=%d", total);*/
    int a, b; //no.2
    int gcd;
    printf("Please input two integer:");
    scanf("%d", &a);
    scanf("%d", &b);
    gcd = (a > b) ? GCD(a, b) : GCD(b, a);
    printf("GCD is %d", gcd);

    int n;

    printf("\nPlease input a number(4):"); // find fibonacci
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d", f(i));
        else
            printf("%d,", f(i));
    }
    return 0;
}
int f(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return f(n - 1) + f(n - 2);
}

int GCD(int m, int n)
{
    //int cnt = 0;
    if (n == 0)
    {
        //cnt++;
        //printf(cnt);
        return m;
    }
    else
        return GCD(n, m % n);
}
