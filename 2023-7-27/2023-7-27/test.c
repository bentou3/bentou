#define  _CRT_SECURE_NO_WARNINGS 1
//不使用中间变量实现两变量值的互换（整形数据）
//1.不恰当方法
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d  ", a);
//	printf("b=%d  ", b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  ", a);
//	printf("b=%d  ", b);
//	return 0;
//}
//此方法下，当a，b数值过大时会出现位数丢失，导致数据不正确，不推荐 。
//2.恰当方法
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d  ", a);
	printf("b=%d  ", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d  ", a);
	printf("b=%d  ", b);
	return 0;
}
//利用位运算符^的特点将两数值相互交换
//注意：位运算符^的使用要注意数据为整形数据