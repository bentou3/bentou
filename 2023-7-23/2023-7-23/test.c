#define  _CRT_SECURE_NO_WARNINGS 1��
//int main()
//{
//	printf("hello world");
//	return 0;
//}
////
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
 
//int main()
//{
//	void ben(int i, int j);
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//	ben(i, j);
//	return 0;
//}
//
//	 void ben(int i, int j)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= i; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%-2d *%-2d =%-3d ", b, a, a * b);
//			
//		}
//		printf("\n");
//	}
//
//}

//int main()
//{
//	void swap(int* x, int* y);
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("x=%d,y=%d\n", x, y);
//	swap(&x, &y);
//	printf("���к�x=%d,y=%d", x, y);
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//ʵ�ֺ����ж�year�ǲ������ꡣ

//int main()
//{
//	int leap_year(int x);
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret=leap_year (i);
//	if (ret == 1)
//		printf("%d��������", i);
//	if (ret == 0)
//		printf("%d�겻������", i);
//	return 0;
//}
//
//int leap_year(int x)
//{
//	if ((x % 4 == 0 && x / 100 != 0) || x / 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//ʵ��һ������is_prime���ж�һ�����ǲ���������
//
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
#include "ben.h"
int main()
{
	int is_prime(int i);
	int ret = 0;
	int i = 0;
	for (i = 100; i <= 200; i++) 
	{
		ret = is_prime(i);
		if (ret == 1)
			printf("%d��������  ", i);
		else
			printf("%d�겻������  ", i);
	}

}
int is_prime(int i)
{
	int j = 0;
	if (i== 1)
		return 0;
	for (j = 2; j <i; j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
