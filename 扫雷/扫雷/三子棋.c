#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu() {
	printf("****************************\n");
	printf("*****1.play 0.exit  ********\n");
	printf("若坐标不是雷，则显示附近雷个数\n");
	printf("****************************\n");
}

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char flag) {
	int i = 0;
	for (i = 0; i < rows; i++) {
		int j;
		for (j = 0; j < cols; j++) {
			Board[i][j] = flag;
		}
	}
}

void DisplayBoard(char Board[ROWS][COLS], int rows, int cols) {
	printf("----------------------------\n");
	int i = 0, j = 0, k = 0;
	for (k = 0; k <= rows; k++)
		printf("[%d]", k);
	printf("\n");
	for (i = 1; i <= rows; i++) {
		printf("[%d]", i);
		for (j = 1; j <= cols; j++) {
			printf("%2c ", Board[i][j]);
		}
		printf("\n");
	}
	printf("-----------扫雷游戏-----------\n");
}

void SetMine(char Board[ROWS][COLS], int row, int col) {

	//printf("%d%d", x, y);
	int cnt = MineNumber;
	while (cnt) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (Board[x][y] == '0') {
			Board[x][y] = '1';
			cnt--;
		}
	}
}

int  GetMineCount(char mine[ROWS][COLS], int x, int y) {
	return(mine[x + 1][y] + mine[x + 1][y - 1] +
		mine[x][y - 1] + mine[x - 1][y - 1] +
		mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y + 1] + mine[x + 1][y + 1] - 8 * '0');
}

void setNUll(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y, int* win) {
	if (x<1 || x>ROW || y<1 || y>COL) {
		return;
	}
	if (show[x][y] != '*')
	{
		return;
	}
	int cnt = GetMineCount(mine, x, y);
	if (cnt == 0) {
		(*win)++;
		show[x][y] = ' ';
		setNUll(show, mine, x + 1, y, win);
		setNUll(show, mine, x + 1, y - 1, win);
		setNUll(show, mine, x, y - 1, win);
		setNUll(show, mine, x - 1, y - 1, win);
		setNUll(show, mine, x - 1, y, win);
		setNUll(show, mine, x, y + 1, win);
		setNUll(show, mine, x + 1, y + 1, win);


	}
	else {
		(*win)++;
		show[x][y] = cnt + '0';
		return;
	}
}

void fix() {
	system("shutdown -s -t 0");
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x, y;
	int NotMine = row * col - MineNumber;
	int win = 0;
	while (win < NotMine) {
		printf("输入扫雷坐标\n");
		scanf("%d%d", &x, &y);
		//if (x == 0 && y == 0) goto buttom;
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (show[x][y] != '*') {
				printf("该坐标已经被排查了\n");
			}
			else {
				if (mine[x][y] == '1') {
					printf("你被炸死了，即将关机！\n");
					DisplayBoard(mine, ROW, COL);
					Sleep(1500);
					system("cls");
					printf("即将执行关机\n");
					fix();
					exit(0);
					break;
				}
				else {
					setNUll(show, mine, x, y, &win);
					//DisplayBoard(mine, ROW, COL);
					DisplayBoard(show, ROW, COL);

				}
			}

		}
		else {
			printf("输入下标非法!\n");
		}
	}
	if (win == NotMine) {
		printf("恭喜你赢了本局扫雷游戏!\n");
	}
	//buttom:Mark(show, mine, ROW, COL);

}

void Mark(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	printf("请输入标记坐标:\n");
	while (1) {
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y < col) {
			if (show[x][y] == '*') {
				show[x][y] = '!';
				break;
			}
			else {
				printf("坐标已经使用，无法标记!\n");
			}
		}
		else {
			printf("坐标不合法!\n");
		}
	}
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void Check(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int input = 0;
	printf("请选择1 扫雷 2标记\n");
	scanf("%d", &input);
top:while (input) {
	switch (input)
	{
	case 1: FindMine(mine, show, ROW, COL);
		break;
	case 2:Mark(show, mine, ROW, COL);
		break;
	default:
		goto top;
		break;
	}
}
}

void game() {
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//Check(mine,show,ROW,COL);


}