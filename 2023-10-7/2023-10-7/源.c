#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 5;
    char operator = '+';
    int result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("计算结果: %d\n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("计算结果: %d\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("计算结果: %d\n", result);
        break;

    case '/':
        result = num1 / num2;
        printf("计算结果: %d\n", result);
        break;

    default:
        printf("无效的运算符\n");
        break;
    }

    return 0;
}
