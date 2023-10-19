#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 定义学生结构体
struct Student {
    int id;
    char name[50];
    float score;
};

int main() {
    int numStudents;
    printf("请输入学生人数：");
    scanf("%d", &numStudents);

    // 动态分配存储学生信息的内存
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    // 输入学生信息
    for (int i = 0; i < numStudents; i++) {
        printf("\n请输入第 %d 个学生的信息\n", i + 1);
        printf("学生ID: ");
        scanf("%d", &(students[i].id));
        printf("学生姓名: ");
        scanf("%s", students[i].name);
        printf("学生成绩: ");
        scanf("%f", &(students[i].score));
    }

    // 输出学生信息
    printf("\n学生信息如下:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("学生ID：%d\n", students[i].id);
        printf("学生姓名：%s\n", students[i].name);
        printf("学生成绩：%.2f\n", students[i].score);
        printf("\n");
    }

    // 释放动态分配的内存
    free(students);

    return 0;
}
