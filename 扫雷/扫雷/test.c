#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main() {
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("��Ϸ����\n");
			break;
		default:
			printf("������������������!\n");
			break;
		}
	} while (input);


}