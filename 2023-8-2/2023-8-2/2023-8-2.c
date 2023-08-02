#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define add(x,y) (x+y)
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a= 5;
//	printf("%ld", a);
//	return 0;
//
//}
//递归法
//#include <stdio.h>
//
//int strlen(const char* str)
//{
//    if (*str == '\0') 
//    {
//        return 0;
//    }
//    return 1 + strlen(str + 1);
//}
//
//int main() 
//{
//    const char* str = "Hello, World!";
//    int length = strlen(str);
//    printf("字符串的长度为：%d\n", length);
//    return 0;
//}
//非递归法
//#include <stdio.h>
//int strlen(const char* str)
//{
//	int num = 0;
//	while (*str!= '\0')
//	{
//		num++;
//		str++;
//	}
//	return num;
//}
//
//int main()
//{
//	const char* str = "Hello, World!";
//	int length = strlen(str);
//	printf("字符串的长度为：%d\n", length);  
//	return 0;
//}
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归法
//#include <stdio.h>
//int factorial(int n)
//{
//    if (n < 0)
//    {
//        printf("无阶乘");
//    }
//    else if (n == 0 || n == 1)
//    {
//        return 1;
//    }
//    else return n * factorial(n - 1);
//}
//
//int main() 
//{
//    int n = 0;
//    printf("请输入你要求的数的阶乘\n");
//    scanf("%d", &n);
//    int result = factorial(n);
//    printf("%d 的阶乘是 %d\n", n, result);
//    return 0;
//}
//非递归法
//#include <stdio.h>
//int factorial(int n)
//{
//    int num = 1;
//    if (n < 0)
//    {
//        printf("无阶乘");
//    }
//    else if (n == 0 || n == 1)
//    {
//        num= 1;
//    }
//    while (n > 0)
//    {
//        num *= n;
//        n--;
//   }
//    return num;
//}
//
//int main() 
//{
//    int n = 0;
//    printf("请输入你要求的数的阶乘\n");
//    scanf("%d", &n);
//    int result = factorial(n);
//    printf("%d 的阶乘是 %d\n", n, result);
//    return 0;
//}
//递归方式实现打印一个整数的每一位
#include <stdio.h>
void ben(int n)
{
	if (n <10)
	{
		printf("%d\n", n);
		return;
	}
	ben(n / 10);
	printf("%d\n", n % 10);
}
int main()
{
	int n = 0;
	printf("请输入想打印的整数");
	scanf("%d", &n);
	ben(n);
	return 0;
}


