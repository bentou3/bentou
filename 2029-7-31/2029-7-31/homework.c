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
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1
//�ݹ鷽��
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
//    printf("������Ҫ����쳲���������λ�ã�");
//    scanf("%d", &n);
//    int result = ben(n);
//    printf("��%d��쳲�������Ϊ��%d\n", n, result);
//    return 0;
//}
//�ǵݹ鷽��
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
//    printf("������Ҫ����쳲���������λ�ã�");
//    scanf("%d", &n);
//    int result = ben(n);
//    printf("��%d��쳲�������Ϊ��%d\n", n, result);
//    return 0;
//}
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//    printf("������Ҫ������n��");
//    scanf("%d", &n);
//    printf("������Ҫ����Ĵ���k��");
//    scanf("%d", &k);
//    int result = ben(n, k);
//    printf("%d��%d�η�Ϊ��%d\n", n, k, result);
//    return 0;
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
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
//    printf("������һ���Ǹ�������");
//    scanf("%d", &n);
//    int result = DigitSum(n);
//    printf("�����ֵĸ�λ����֮��Ϊ��%d\n", result);
//    return 0;
//}
//
//��ҵ����
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
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
//    printf("ԭʼ�ַ�����%s\n", arr);
//    printf("�������к���ַ�����");
//    reverse_string(arr);
//    return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�
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
    printf("�ַ����ĳ���Ϊ��%d\n", length);
    return 0;
}


