#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main() {
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("游戏结束\n");
			break;
		default:
			printf("输入有误，请重新输入!\n");
			break;
		}
	} while (input);


}