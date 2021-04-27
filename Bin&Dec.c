#include <stdio.h>
#include <string.h>
#include <math.h>

int main() //binary & decimal轉換
{
    unsigned int d;
    char result[100];
    printf("Please input a decimal number:");
    scanf("%d", &d);
    int temp;
    int i = 0;
    while (1)
    {
        result[i] = (d % 2) ? '1' : '0';
        d = d / 2;
        i++;
        if (d == 1)
        {
            result[i] = '1';
            result[i + 1] = '\0';
            break;
        }
    }
    for (int i = strlen(result) - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
    char b[100];
    int r = 0, k = 1;
    printf("Please input a binary number:");
    scanf("%s", b);
    int len = strlen(b);
    //r = r + (double)b[0] * pow(2, (double)strlen(b) - 0);
    //printf("%d", len);
    for (int i = 0; i < strlen(b); i++)
    {
        r = r + ((int)b[i] - (int)'0') * pow(2, len - k);
        k++;
    }
    printf("%d", r);
}
