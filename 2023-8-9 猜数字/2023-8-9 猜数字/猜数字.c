#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    srand(time(0));  // ʹ�õ�ǰʱ����Ϊ�����������������

    // ����һ��1��100�������
    randomNumber = rand() % 100 + 1;

    printf("��������Ϸ�����Ѿ����һ��1��100֮������֡�\n");

    do {
        printf("��������²�����֣�");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber) {
            printf("�´��ˣ�\n");
        }
        else if (guess < randomNumber) {
            printf("��С�ˣ�\n");
        }
        else {
            printf("��ϲ�㣬�¶��ˣ��㻨�� %d �β������� %d��\n", attempts, randomNumber);
        }
    } while (guess != randomNumber);

    return 0;
}
