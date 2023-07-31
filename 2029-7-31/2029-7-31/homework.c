#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int Fun(int n);
//    int a = 0;
//    a = Fun(2);
//    printf("%d", a);
//    return 0;
//}
//
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
//递归方法
//#include <stdio.h>
//
//int ben(int n) 
//{
//    if (n <= 1) 
//    {
//        return n;
//    }
//    else 
//        return ben(n - 1) + ben(n - 2);
//}
//
//int main() 
//{
//    int n;
//    printf("请输入要求解的斐波那契数的位置：");
//    scanf("%d", &n);
//    int result = ben(n);
//    printf("第%d个斐波那契数为：%d\n", n, result);
//    return 0;
//}
//非递归方法
//#include <stdio.h>

//int ben(int n) 
//{
//    if (n <= 1) 
//    {
//        return n;
//    }
//    int a = 0;
//    int b = 1;
//    int i=0;
//    for (i = 2; i <= n; i++) 
//    {
//        int temp = a + b;
//        a = b;
//        b = temp;
//    }
//
//    return b;
//}
//
//int main() 
//{
//    int n;
//    printf("请输入要求解的斐波那契数的位置：");
//    scanf("%d", &n);
//    int result = ben(n);
//    printf("第%d个斐波那契数为：%d\n", n, result);
//    return 0;
//}
//编写一个函数实现n的k次方，使用递归实现。
//#include <stdio.h>
//int ben(int n, int k) 
//{
//    if (k == 0) 
//    {
//        return 1;
//    }
//    else if (k > 0) {
//        return n * ben(n, k - 1);
//    }
//    else {
//        return 1 / ben(n, -k);
//    }
//}
//
//int main() 
//{
//    int n;
//    int k;
//    printf("请输入要求解的数n：");
//    scanf("%d", &n);
//    printf("请输入要计算的次数k：");
//    scanf("%d", &k);
//    int result = ben(n, k);
//    printf("%d的%d次方为：%d\n", n, k, result);
//    return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//#include <stdio.h>
//int DigitSum(int n)
//{
//    if (n < 10) 
//    {
//        return n;
//    }
//    return n % 10 + DigitSum(n / 10);
//}
//
//int main() 
//{
//    int n;
//    printf("请输入一个非负整数：");
//    scanf("%d", &n);
//    int result = DigitSum(n);
//    printf("该数字的各位数字之和为：%d\n", result);
//    return 0;
//}
//
//作业内容
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
//#include <stdio.h>
//void reverse_string(char* string) 
//{
//    if (*string == '\0') 
//    {
//        return; 
//    }
//    reverse_string(string + 1);  
//    printf("%c", *string); 
//}
//
//int main() 
//{
//    char arr[] = "abcdef";
//    printf("原始字符串：%s\n", arr);
//    printf("反向排列后的字符串：");
//    reverse_string(arr);
//    return 0;
//}
//递归和非递归分别实现strlen
//递归
#include <stdio.h>
int strlen(const char* str) {
    if (*str == '\0') 
    {
        return 0;
    }
    return 1 +strlen(str + 1);
}
int main() 
{
    const char* str = "Hello, World!";
    int length = strlen(str);
    printf("字符串的长度为：%d\n", length);
    return 0;
}


