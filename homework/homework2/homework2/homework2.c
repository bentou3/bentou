#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
// �����1��10�׳�֮��
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			//ret = ret * i;
//			ret *= i;
//			
//		}
//		sum += ret;
//	}
//	
//
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 
// 
//��һ��������������ĳ����������n
//1 2 3 4 5 6 7 8 9
//0 1 2 3 4 5 6 7 8
//7
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int i = 0;
//	int flag = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] == n)
//		{
//			flag = 1;
//			printf("�������ҵ����±�Ϊ��%d\n", i);
//			break;
//		}
//		
//	}
//	if (flag==0)
//		printf("������");
//		return 0;
//
//}
// 
// ��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
// 
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ�����\n");
		}
	}
	return 0;
}

	