#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		printf("%d", i);
//		i = 5;
//	}
//	return 0;
//}
int main()
{
	char passport[20];
	printf("请输入密码：>\n");
	scanf("%s", passport);
	int ch = 0;
	while (getchar() != '\n')
	{
		;
	}
	printf("请确定（Y/N)\n");
	ch=getchar();
	if ('Y' == ch)
	{
		printf("确认成功");
	}
	else printf("确认失败");
	return 0;
}