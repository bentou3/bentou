#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// 定义一个结构体表示人的信息
struct Person {
    char name[20];
    int age;
};

// 定义一个函数，用于输出感谢的信息
void thankYou(const struct Person* person) {
    printf("感谢 %s，%d岁，对我的帮助和支持！\n", person->name, person->age);
}

int main()
{
    struct Person p;

    printf("请输入你的名字：");
    scanf("%s", p.name);

    printf("请输入你的年龄：");
    scanf("%d", &p.age);

    // 调用感谢函数
    thankYou(&p);

    return 0;
}
