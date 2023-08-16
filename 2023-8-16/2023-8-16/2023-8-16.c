#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 5;

    // 生成随机数
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("欢迎来到猜数字游戏！\n");
    printf("我已经想好了一个 1-100 之间的数字。\n");

    // 猜数字循环
    while (1) {
        printf("请输入你猜测的数字：");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("恭喜你猜对了！\n");
            printf("你用了 %d 次猜测。\n", attempts);
            break;
        }
        else if (guess < secretNumber) {
            printf("猜错了！太小了。\n");
        }
        else {
            printf("猜错了！太大了。\n");
        }

        if (attempts >= maxAttempts) {
            printf("很遗憾，你没有猜对。\n");
            printf("正确的数字是：%d\n", secretNumber);
            break;
        }
    }

    return 0;
}
