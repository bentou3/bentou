#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	char a[20] = { 0 };
	system ("shutdown -s -t 60");
	while(1)
	{
		printf("������������������Խ���һ�������Զ��ػ�");
			scanf("%s", a);
		if (strcmp(a, "������"));
		{
			system("system -a");
			printf("�ܺã���������Լ�������");
			break;
		}
	}
	return 0;
}