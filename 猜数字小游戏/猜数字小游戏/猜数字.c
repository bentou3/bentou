#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>//rand 函数头文件
#include <time.h>//srand 函数中time函数的头文件
//猜数字游戏
//让电脑随机生产一个1到100之间的数
//接下来我们可以猜这个数字的值
//如果猜小了，就告诉你猜小了
//如果猜大了，就告诉你猜大了
//如果猜对了，那就输出：恭喜你猜对了，游戏结束
void Menu()//产生游戏前缀
{
	printf("**************************\n");
	printf("******  0. exit     ******\n");
	printf("******  1. play     ******\n");
	printf("**************************\n");
}

void game()
{
	srand((unsigned int)time(NULL));//rand函数在生产随机数之前，要使用srand函数设置随机数的生成器
	int random = rand() % 100 + 1;//生成一个0到99+1的随机数 
	int guess = 0;//
	while (1)
	{
		printf("请猜数字:  ");
		scanf("%d", &guess);
		if (guess < random)
			printf("猜小了，请重新猜一次吧\n");
		else if (guess > random)
			printf("猜大了，请重新猜一次吧\n");
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择>:");
		scanf("%d", &input);//玩家进行选择
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}
