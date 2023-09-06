#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("      *      \n");
//	printf("     ***      \n");
//	printf("    *****      \n");
//	printf("   *******      \n");
//	printf("  *********      \n");
//	printf(" ***********      \n");
//	printf("*************      \n");
//	printf(" ***********      \n");
//	printf("  *********      \n");
//	printf("   *******      \n");
//	printf("    *****     \n");
//	printf("     ***     \n");
//	printf("      *     \n");
//	return 0;
//
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp) 
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < 5; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}*/
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	return 0;
//}
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}