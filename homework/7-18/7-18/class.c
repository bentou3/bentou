#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//你是猪吗？？
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		pritnf("电脑将在1分钟内关机，请输入“我是猪”解除关机指令");
//			scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("你很听话，关机解除了");
//			break;
//		}
//		else
//			printf("猪你好");
//	
//	}
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//开始倒计数关机

again:
	printf("你的电脑在1分钟内就会关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("你很配合，已经取消关机\n");
	}
	else
	{
		goto again;
	}

	return 0;
}