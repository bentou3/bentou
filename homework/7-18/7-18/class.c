#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������𣿣�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		pritnf("���Խ���1�����ڹػ��������롰����������ػ�ָ��");
//			scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("����������ػ������");
//			break;
//		}
//		else
//			printf("�����");
//	
//	}
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//��ʼ�������ػ�

again:
	printf("��ĵ�����1�����ھͻ�ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("�����ϣ��Ѿ�ȡ���ػ�\n");
	}
	else
	{
		goto again;
	}

	return 0;
}