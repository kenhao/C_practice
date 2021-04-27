#include <stdio.h>
#include <string.h>

int main() //判斷兩個字串是否為子母字串
{
    char input[100];
    char input2[100];

    printf("Please input the string1:");
    scanf("%s", input);
    printf("Please input the string2:");
    scanf("%s", input2);
    int len2 = strlen(input2);
    //printf("%c\n", input[0]);
    int cnt = 0;
    int repeat = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        cnt = 0;
        for (int j = i; j < i + strlen(input2); j++)
        {
            if (input[j] == input2[cnt])
            {
                cnt++;
                if (cnt == len2)
                {
                    repeat++;
                    cnt = 0;
                    //printf("%d\n", repeat);
                }
            }
            else
                break;
        }
    }
    if (repeat == 0)
        printf("String2 is not a substring of string1.");
    else
    {
        printf("String2 is a substring of string1.\n");
        printf("Repeat %d times", repeat);
    }
}