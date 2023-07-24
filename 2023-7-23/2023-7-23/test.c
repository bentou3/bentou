#define  _CRT_SECURE_NO_WARNINGS 1、
//int main()
//{
//	printf("hello world");
//	return 0;
//}
////
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
 #include "ben.h"
int main()
{
	void ben(int i, int j);
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	ben(i, j);
	return 0;
}

	 void ben(int i, int j)
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= i; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%-2d *%-2d =%-3d ", b, a, a * b);
			
		}
		printf("\n");
	}

}

