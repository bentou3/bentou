#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printDigitsRecursive(int n) {
    if (n < 10) {
        printf("%d ", n);
        return;
    }

    printDigitsRecursive(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int number = 12345;
    printf("���� %d ��ÿһλ�ǣ�", number);
    printDigitsRecursive(number);
    printf("\n");

    return 0;
}
