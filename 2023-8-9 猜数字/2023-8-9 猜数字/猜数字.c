#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    srand(time(0));  // 使用当前时间作为随机数生成器的种子

    // 生成一个1到100的随机数
    randomNumber = rand() % 100 + 1;

    printf("猜数字游戏！我已经想好一个1到100之间的数字。\n");

    do {
        printf("请输入你猜测的数字：");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber) {
            printf("猜大了！\n");
        }
        else if (guess < randomNumber) {
            printf("猜小了！\n");
        }
        else {
            printf("恭喜你，猜对了！你花了 %d 次猜中数字 %d。\n", attempts, randomNumber);
        }
    } while (guess != randomNumber);

    return 0;
}
