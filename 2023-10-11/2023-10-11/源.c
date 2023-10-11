#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // 设置随机种子

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int sum = num1 + num2;

    printf("第一个随机数: %d\n", num1);
    printf("第二个随机数: %d\n", num2);
    printf("两个随机数的和: %d\n", sum);

    return 0;
}
