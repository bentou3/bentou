#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// 定义人员结构体
typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
} Person;

// 从用户输入读取人员信息
void readPersonData(Person* person) {
    printf("请输入姓名：");
    scanf("%s", person->name);

    printf("请输入年龄：");
    scanf("%d", &person->age);

    printf("请输入性别（M/F）：");
    scanf(" %c", &person->gender);
}

// 打印单个人员信息
void printPersonData(const Person* person) {
    printf("姓名：%s\n", person->name);
    printf("年龄：%d\n", person->age);
    printf("性别：%c\n", person->gender);
}

int main() {
    Person people[4];  // 声明一个包含4个人员的数组

    // 依次读取人员信息
    for (int i = 0; i < 4; i++) {
        printf("请输入第%d个人的信息：\n", i + 1);
        readPersonData(&people[i]);
        printf("\n");
    }

    // 打印所有人员信息
    printf("所有人员信息如下：\n");
    for (int i = 0; i < 4; i++) {
        printf("第%d个人的信息：\n", i + 1);
        printPersonData(&people[i]);
        printf("\n");
    }

    return 0;
}
