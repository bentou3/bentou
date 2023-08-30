#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//交换两个变量（不创建临时变量)
//#include <stdio.h>/*
//int main() 
//{
//    int num1, num2;
//    printf("请输入第一个整数: ");
//    scanf("%d", &num1);
//    printf("请输入第二个整数: ");
//    scanf("%d", &num2);
//    num1 = num1 ^ num2;
//    num2 = num1 ^ num2;
//    num1 = num1 ^ num2;
//    printf("交换后的两个整数：%d 和 %d\n", num1, num2);
//    return 0;*/
//}
//#include <stdio.h>
//int ben(int num)
//{
//    int count = 0;
//    while (num != 0)
//    {
//        if (num & 1)
//        {
//            count++;
//        }
//        num >>=1;
//    }
//    return count;
//}
//
//int main()
//{
//    int num;
//    printf("请输入一个整数: ");
//    scanf("%d", &num);
//    int onesCount = ben(num);
//    printf("二进制表示中1的个数为：%d\n", onesCount);
//    return 0;
//}
//#include <stdio.h>
//int ben(int num)
//{
//    int count = 0;
//    while (num != 0)
//    {
//        if (num > 0)
//        {
//            if (num & 1)
//            {
//                count++;
//            }
//            num >>= 1;
//        }
//        if (num < 0)
//        {
//            num = ~num;
//        }
//        if (num & 1)
//        {
//            count++;
//        }
//        num >>= 1;
//
//    }
//    return count;
//}
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int onesCount = ben(num);
//    printf("二进制表示中1的个数为：%d\n", onesCount);
//    return 0;
//}
//打印整数二进制的奇数位和偶数位
//#include <stdio.h>
//void print(int num) 
//{
//    printf("奇数位：");
//    for (int i = 31; i >= 0; i -= 2) 
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n偶数位：");
//    for (int i = 30; i >= 0; i -= 2) 
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n");
//}
//int main() 
//{
//    int num;
//    printf("请输入一个整数: ");
//    scanf("%d", &num);
//    print(num);
//    return 0;
//}
//#include <stdio.h>
//#include <stdint.h>
//
//int countDifferentBits(uint32_t num1, uint32_t num2) {
//    uint32_t xorResult = num1 ^ num2;
//    int count = 0;
//
//    while (xorResult != 0) {
//        if (xorResult & 1) {
//            count++;
//        }
//
//        xorResult >>= 1;
//    }
//
//    return count;
//}
//
//int main() {
//    uint32_t num1, num2;
//
//    printf("请输入第一个整数: ");
//    scanf("%u", &num1);
//
//    printf("请输入第二个整数: ");
//    scanf("%u", &num2);
//
//    int diffCount = countDifferentBits(num1, num2);
//
//    printf("两个整数二进制格式有 %d 个位不同\n", diffCount);
//
//    return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf("0\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//
//数据范围： 1 \le n, m \le 1000 \1≤n, m≤1000  ， 序列中的值满足 0 \le val \le 30000 \0≤val≤30000
//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
#include<stdio.h>
int main()
{
    int a = 0, b;
    scanf("%d%d", &a, &b);
    //scanf("%a%b", &a, &b);
    int arr[20] = { 0 };
    int arr2[20] = { 0 };
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[40] = { 0 }; int m = 0;
    for (int i = 0; i < a + b; i++)
    {
        if (i < a)
        {
            arr3[i] = arr[i];
            m = i + 1;
        }
        else
            arr3[i] = arr2[i - m];
    }
    //冒泡排序
    for (int i = 0; i < a + b - 1; i++)
    {
        for (int m = 0; m < a + b - 1 - i; m++)
        {
            if (arr3[m] > arr3[m + 1])
            {
                int t = 0;
                t = arr3[m + 1];
                arr3[m + 1] = arr3[m];
                arr3[m] = t;
            }
        }
    }
    for (int i = 0; i < a + b; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
