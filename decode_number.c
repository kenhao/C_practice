#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    char ret[20] = {};
    int retn = 0;
    printf("input (1~3999):");
    scanf("%d", &num);
    int number[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char flags[13][2] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; i < 13; i++)
    {
        if (num < number[i])
            continue;
        while (num >= number[i])
        {
            num = num - number[i];
            printf("%d ", number[i]);
            printf("%s ", flags[2]);
        }
    }
}