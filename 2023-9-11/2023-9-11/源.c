#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	char a[20] = { 0 };
	system ("shutdown -s -t 60");
	while(1)
	{
		printf("请输入我是猪，否则电脑将在一分钟内自动关机");
			scanf("%s", a);
		if (strcmp(a, "我是猪"));
		{
			system("system -a");
			printf("很好，你承认你自己是猪了");
			break;
		}
	}
	return 0;
}