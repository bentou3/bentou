#define  _CRT_SECURE_NO_WARNINGS 1
//�ȴ�СС��Ϸ
//���������һ�������ڽ��бȽ�
//Ҫ�õ�ʱ��time����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // ���������
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("��ӭ�μӱ����ִ�С��Ϸ��\n");
    printf("���Ѿ������һ�� 1 �� 100 ֮������֡�\n");

    while (1) {
        printf("��������²�����֣�");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("��ϲ��¶��ˣ�\n");
            printf("������ %d �β²⡣\n", attempts);
            break;
        }
        else if (guess < secretNumber) {
            printf("�´��ˣ�̫С�ˡ�\n");
        }
        else {
            printf("�´��ˣ�̫���ˡ�\n");
        }
    }

    printf("��Ϸ������лл���룡\n");

    return 0;
}
