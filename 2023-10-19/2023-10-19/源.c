#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ����ѧ���ṹ��
struct Student {
    int id;
    char name[50];
    float score;
};

int main() {
    int numStudents;
    printf("������ѧ��������");
    scanf("%d", &numStudents);

    // ��̬����洢ѧ����Ϣ���ڴ�
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    // ����ѧ����Ϣ
    for (int i = 0; i < numStudents; i++) {
        printf("\n������� %d ��ѧ������Ϣ\n", i + 1);
        printf("ѧ��ID: ");
        scanf("%d", &(students[i].id));
        printf("ѧ������: ");
        scanf("%s", students[i].name);
        printf("ѧ���ɼ�: ");
        scanf("%f", &(students[i].score));
    }

    // ���ѧ����Ϣ
    printf("\nѧ����Ϣ����:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ѧ��ID��%d\n", students[i].id);
        printf("ѧ��������%s\n", students[i].name);
        printf("ѧ���ɼ���%.2f\n", students[i].score);
        printf("\n");
    }

    // �ͷŶ�̬������ڴ�
    free(students);

    return 0;
}
