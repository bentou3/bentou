#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
// 计算从1到10阶乘之和
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
//在一个有序数组中找某个具体数字n
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
//			printf("数字已找到，下标为：%d\n", i);
//			break;
//		}
//		
//	}
//	if (flag==0)
//		printf("不存在");
//		return 0;
//
//}
// 
// 编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
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
			printf("找到了，下标是%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到了\n");
		}
	}
	return 0;
}

	