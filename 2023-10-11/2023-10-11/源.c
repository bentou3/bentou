#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // �����������

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int sum = num1 + num2;

    printf("��һ�������: %d\n", num1);
    printf("�ڶ��������: %d\n", num2);
    printf("����������ĺ�: %d\n", sum);

    return 0;
}
