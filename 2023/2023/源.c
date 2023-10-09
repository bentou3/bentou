#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0)); // 设置随机种子

    int randomNumber = generateRandomNumber(1, 10);

    printf("随机数: %d\n", randomNumber);

    if (randomNumber % 2 == 0) {
        printf("随机数是偶数\n");
    }
    else {
        printf("随机数是奇数\n");
    }

    return 0;
}
