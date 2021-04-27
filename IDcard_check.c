#include <stdio.h>
#include <string.h>
//name ID
int id_num(char);
int main()
{
    int num[11], y = 0, check;
    char input[11];
    scanf("%s", input);
    //gets(input); //57
    num[0] = (id_num(input[0])) / 10;
    num[1] = (id_num(input[0])) % 10;
    for (int i = 2; i < 11; i++)
    {
        num[i] = (int)input[i - 1] - 48;
    }
    y = num[0];
    int k = 9;
    for (int i = 1; i <= 9; i++)
    {
        y = y + (k * num[i]);
        k--;
    }
    printf("%d", y);
    check = 10 - (y % 10);
    if (check == 10)
    {
        check = 0;
    }
    printf("\n");
    if (num[10] == check)
    {
        printf("correct");
    }
    else
    {
        printf("ERROR");
    }
}
int id_num(char n)
{
    switch (n)
    {
    case 'A':
        return 10;
        break;
    case 'B':
        return 11;
        break;
    case 'C':
        return 12;
        break;
    case 'D':
        return 13;
        break;
    case 'E':
        return 14;
        break;
    case 'F':
        return 15;
        break;
    case 'G':
        return 16;
        break;
    case 'H':
        return 17;
        break;
    case 'I':
        return 34;
        break;
    case 'J':
        return 18;
        break;
    case 'K':
        return 19;
        break;
    case 'L':
        return 20;
        break;
    case 'M':
        return 21;
        break;
    case 'N':
        return 22;
        break;
    case 'O':
        return 35;
        break;
    case 'P':
        return 23;
        break;
    case 'Q':
        return 24;
        break;
    case 'R':
        return 25;
        break;
    case 'S':
        return 26;
        break;
    case 'T':
        return 27;
        break;
    case 'U':
        return 28;
        break;
    case 'V':
        return 29;
        break;
    case 'W':
        return 32;
        break;
    case 'X':
        return 30;
        break;
    case 'Y':
        return 31;
        break;
    case 'Z':
        return 33;
        break;
    }
}
