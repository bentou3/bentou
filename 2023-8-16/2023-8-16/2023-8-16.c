#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 5;

    // ���������
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("��ӭ������������Ϸ��\n");
    printf("���Ѿ������һ�� 1-100 ֮������֡�\n");

    // ������ѭ��
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

        if (attempts >= maxAttempts) {
            printf("���ź�����û�в¶ԡ�\n");
            printf("��ȷ�������ǣ�%d\n", secretNumber);
            break;
        }
    }

    return 0;
}
