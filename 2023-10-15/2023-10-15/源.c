#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("请输入第一个整数：");
    scanf("%d", &num1);

    printf("请输入第二个整数：");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("两个整数的和为：%d\n", sum);

    return 0;
}
