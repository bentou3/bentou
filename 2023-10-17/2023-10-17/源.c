#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, count = 0;
    srand(time(NULL));
    num = rand() % 100 + 1;

    printf("��ӭ������������Ϸ��\n");
    printf("���һ��1��100֮���������\n");

    do {
        printf("��������Ĳ²⣺");
        scanf("%d", &guess);
        count++;

        if (guess > num) {
            printf("�´��ˣ����ٲ�һ�Ρ�\n");
        }
        else if (guess < num) {
            printf("��С�ˣ����ٲ�һ�Ρ�\n");
        }
        else {
            printf("��ϲ�㣬�¶��ˣ������� %d �λ��ᡣ\n", count);
        }
    } while (guess != num);

    return 0;
}
