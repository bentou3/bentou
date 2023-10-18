#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, count = 0;
    srand(time(NULL));
    num = rand() % 100 + 1;

    printf("欢迎来到猜数字游戏！\n");
    printf("请猜一个1到100之间的整数。\n");

    do {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        count++;

        if (guess > num) {
            printf("猜大了，请再猜一次。\n");
        }
        else if (guess < num) {
            printf("猜小了，请再猜一次。\n");
        }
        else {
            printf("恭喜你，猜对了！你用了 %d 次机会。\n", count);
        }
    } while (guess != num);

    return 0;
}
