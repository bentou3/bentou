#define  _CRT_SECURE_NO_WARNINGS 1
//��ʹ���м����ʵ��������ֵ�Ļ������������ݣ�
//1.��ǡ������
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
//�˷����£���a��b��ֵ����ʱ�����λ����ʧ���������ݲ���ȷ�����Ƽ� ��
//2.ǡ������
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
//����λ�����^���ص㽫����ֵ�໥����
//ע�⣺λ�����^��ʹ��Ҫע������Ϊ��������