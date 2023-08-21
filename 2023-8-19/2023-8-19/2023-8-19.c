#define  _CRT_SECURE_NO_WARNINGS 1
//比大小小游戏
//先随机生成一个数字在进行比较
//要用到时间time函数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // 生成随机数
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("欢迎参加比数字大小游戏！\n");
    printf("我已经想好了一个 1 到 100 之间的数字。\n");

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
    }

    printf("游戏结束。谢谢参与！\n");

    return 0;
}
