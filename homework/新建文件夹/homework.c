#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x, y, z;
//	int tmp=0;
//	scanf("%d", &x);
//	scanf("%d", &y);
//	scanf("%d", &z);
//	if (x < y)
//	{
//		tmp = x;
//		x = y;
//		y = tmp;
//	}
//	 if (x < z)
//	{
//		tmp = x;
//		x = z;
//		z=tmp;
//	}
//	 if (x < y)
//	 {
//		 tmp = x;
//		 x = y;
//		 y = tmp;
//	 }
//	 printf("%d %d %d", x, y, z);
//	 return 0;
//}

//
//��100��200����������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
 
//��ӡ1000��2000��������
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//���������������������������Լ��
//���磺
//���룺20 40
//�����20
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//	int k=0;
//	while (k = i % j)
//	{
//		i = j;
//		j = k;
//	}
//	printf("%d", j);
//	return 0;
//}

//����Ļ������˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf(" % d * %d = % d ",j, i, j * i);
//		printf("\n");
//	}
//	
//	return 0;
//}

//��10����������������
//int main()
//{
//	int a[10] = { 0 };
//	int n = 0;
//	for(n=0;n<10;n++)
//	scanf("%d", &a[n]);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > sum)
//			sum = a[i];
//	}
//	printf("max is %d", sum);
//	return 0;
//}

//�������
int main()
{
	int  i = 0;
	double n = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		n = n + 1;
		if (i % 2 == 1)
		{
			sum = sum + 1 / n;
		}
		else sum = sum - 1 / n;
	}
	printf("%lf", sum);
	return 0;
}