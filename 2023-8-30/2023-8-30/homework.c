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
//����������������������ʱ����)
//#include <stdio.h>/*
//int main() 
//{
//    int num1, num2;
//    printf("�������һ������: ");
//    scanf("%d", &num1);
//    printf("������ڶ�������: ");
//    scanf("%d", &num2);
//    num1 = num1 ^ num2;
//    num2 = num1 ^ num2;
//    num1 = num1 ^ num2;
//    printf("�����������������%d �� %d\n", num1, num2);
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
//    printf("������һ������: ");
//    scanf("%d", &num);
//    int onesCount = ben(num);
//    printf("�����Ʊ�ʾ��1�ĸ���Ϊ��%d\n", onesCount);
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
//    printf("�����Ʊ�ʾ��1�ĸ���Ϊ��%d\n", onesCount);
//    return 0;
//}
//��ӡ���������Ƶ�����λ��ż��λ
//#include <stdio.h>
//void print(int num) 
//{
//    printf("����λ��");
//    for (int i = 31; i >= 0; i -= 2) 
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\nż��λ��");
//    for (int i = 30; i >= 0; i -= 2) 
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n");
//}
//int main() 
//{
//    int num;
//    printf("������һ������: ");
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
//    printf("�������һ������: ");
//    scanf("%u", &num1);
//
//    printf("������ڶ�������: ");
//    scanf("%u", &num2);
//
//    int diffCount = countDifferentBits(num1, num2);
//
//    printf("�������������Ƹ�ʽ�� %d ��λ��ͬ\n", diffCount);
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
//���������������е����У����������кϲ�Ϊһ���������в������
//
//���ݷ�Χ�� 1 \le n, m \le 1000 \1��n, m��1000  �� �����е�ֵ���� 0 \le val \le 30000 \0��val��30000
//����������
//����������У�
//
//��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//
//�ڶ��а���n���������ÿո�ָ���
//
//�����а���m���������ÿո�ָ���
//���������
//���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���
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
    //ð������
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
