#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

void printGreeting(const char* name) {
    printf("欢迎回家，%s！\n", name);
}

void playMusic() {
    printf("音乐响起，愉悦的旋律让人心情愉悦。\n");
}

void prepareFood() {
    printf("大厨忙碌着准备各种美食，香气四溢。\n");
}

int main() {
    char name[MAX_NAME_LENGTH];

    printf("请输入您的姓名：");
    scanf("%s", name);

    printGreeting(name);
    printf("\n");

    printf("现在，团聚的热闹开始了！\n");
    printf("\n");

    printf("指令：playMusic()\n");
    playMusic();
    printf("\n");

    printf("指令：prepareFood()\n");
    prepareFood();
    printf("\n");

    printf("欢迎尽情享用美食和音乐，度过美好的时光！\n");
    printf("\n");

    return 0;
}
