#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>//rand ����ͷ�ļ�
#include <time.h>//srand ������time������ͷ�ļ�
//��������Ϸ
//�õ����������һ��1��100֮�����
//���������ǿ��Բ�������ֵ�ֵ
//�����С�ˣ��͸������С��
//����´��ˣ��͸�����´���
//����¶��ˣ��Ǿ��������ϲ��¶��ˣ���Ϸ����
void Menu()//������Ϸǰ׺
{
	printf("**************************\n");
	printf("******  0. exit     ******\n");
	printf("******  1. play     ******\n");
	printf("**************************\n");
}

void game()
{
	srand((unsigned int)time(NULL));//rand���������������֮ǰ��Ҫʹ��srand���������������������
	int random = rand() % 100 + 1;//����һ��0��99+1������� 
	int guess = 0;//
	while (1)
	{
		printf("�������:  ");
		scanf("%d", &guess);
		if (guess < random)
			printf("��С�ˣ������²�һ�ΰ�\n");
		else if (guess > random)
			printf("�´��ˣ������²�һ�ΰ�\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		Menu();
		printf("��ѡ��>:");
		scanf("%d", &input);//��ҽ���ѡ��
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}
