#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

void printGreeting(const char* name) {
    printf("��ӭ�ؼң�%s��\n", name);
}

void playMusic() {
    printf("�����������õ����������������á�\n");
}

void prepareFood() {
    printf("���æµ��׼��������ʳ���������硣\n");
}

int main() {
    char name[MAX_NAME_LENGTH];

    printf("����������������");
    scanf("%s", name);

    printGreeting(name);
    printf("\n");

    printf("���ڣ��ž۵����ֿ�ʼ�ˣ�\n");
    printf("\n");

    printf("ָ�playMusic()\n");
    playMusic();
    printf("\n");

    printf("ָ�prepareFood()\n");
    prepareFood();
    printf("\n");

    printf("��ӭ����������ʳ�����֣��ȹ����õ�ʱ�⣡\n");
    printf("\n");

    return 0;
}
