#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// ����һ���ṹ���ʾ�˵���Ϣ
struct Person {
    char name[20];
    int age;
};

// ����һ�����������������л����Ϣ
void thankYou(const struct Person* person) {
    printf("��л %s��%d�꣬���ҵİ�����֧�֣�\n", person->name, person->age);
}

int main()
{
    struct Person p;

    printf("������������֣�");
    scanf("%s", p.name);

    printf("������������䣺");
    scanf("%d", &p.age);

    // ���ø�л����
    thankYou(&p);

    return 0;
}
