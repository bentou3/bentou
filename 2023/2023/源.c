#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0)); // �����������

    int randomNumber = generateRandomNumber(1, 10);

    printf("�����: %d\n", randomNumber);

    if (randomNumber % 2 == 0) {
        printf("�������ż��\n");
    }
    else {
        printf("�����������\n");
    }

    return 0;
}
