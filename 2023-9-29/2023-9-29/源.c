#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// ������Ա�ṹ��
typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
} Person;

// ���û������ȡ��Ա��Ϣ
void readPersonData(Person* person) {
    printf("������������");
    scanf("%s", person->name);

    printf("���������䣺");
    scanf("%d", &person->age);

    printf("�������Ա�M/F����");
    scanf(" %c", &person->gender);
}

// ��ӡ������Ա��Ϣ
void printPersonData(const Person* person) {
    printf("������%s\n", person->name);
    printf("���䣺%d\n", person->age);
    printf("�Ա�%c\n", person->gender);
}

int main() {
    Person people[4];  // ����һ������4����Ա������

    // ���ζ�ȡ��Ա��Ϣ
    for (int i = 0; i < 4; i++) {
        printf("�������%d���˵���Ϣ��\n", i + 1);
        readPersonData(&people[i]);
        printf("\n");
    }

    // ��ӡ������Ա��Ϣ
    printf("������Ա��Ϣ���£�\n");
    for (int i = 0; i < 4; i++) {
        printf("��%d���˵���Ϣ��\n", i + 1);
        printPersonData(&people[i]);
        printf("\n");
    }

    return 0;
}
