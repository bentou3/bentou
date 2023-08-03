#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu() {
	printf("****************************\n");
	printf("*****1.play 0.exit  ********\n");
	printf("�����겻���ף�����ʾ�����׸���\n");
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
	printf("-----------ɨ����Ϸ-----------\n");
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
		printf("����ɨ������\n");
		scanf("%d%d", &x, &y);
		//if (x == 0 && y == 0) goto buttom;
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (show[x][y] != '*') {
				printf("�������Ѿ����Ų���\n");
			}
			else {
				if (mine[x][y] == '1') {
					printf("�㱻ը���ˣ������ػ���\n");
					DisplayBoard(mine, ROW, COL);
					Sleep(1500);
					system("cls");
					printf("����ִ�йػ�\n");
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
			printf("�����±�Ƿ�!\n");
		}
	}
	if (win == NotMine) {
		printf("��ϲ��Ӯ�˱���ɨ����Ϸ!\n");
	}
	//buttom:Mark(show, mine, ROW, COL);

}

void Mark(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	printf("������������:\n");
	while (1) {
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y < col) {
			if (show[x][y] == '*') {
				show[x][y] = '!';
				break;
			}
			else {
				printf("�����Ѿ�ʹ�ã��޷����!\n");
			}
		}
		else {
			printf("���겻�Ϸ�!\n");
		}
	}
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void Check(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int input = 0;
	printf("��ѡ��1 ɨ�� 2���\n");
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