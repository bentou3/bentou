#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 8

typedef struct {
    int row;
    int col;
} Position;

char board[SIZE][SIZE];

void initializeBoard() {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 'A' + rand() % 5;
        }
    }
}

void printBoard() {
    printf("  ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int isValidPosition(int row, int col) {
    return row >= 0 && row < SIZE && col >= 0 && col < SIZE;
}

int isAdjacent(Position p1, Position p2) {
    return (abs(p1.row - p2.row) == 1 && p1.col == p2.col) || (p1.row == p2.row && abs(p1.col - p2.col) == 1);
}

void removeAdjacentBlocks(Position p) {
    char target = board[p.row][p.col];
    board[p.row][p.col] = ' ';

    // 上方
    if (isValidPosition(p.row - 1, p.col) && board[p.row - 1][p.col] == target) {
        removeAdjacentBlocks((Position) { p.row - 1, p.col });
    }

    // 下方
    if (isValidPosition(p.row + 1, p.col) && board[p.row + 1][p.col] == target) {
        removeAdjacentBlocks((Position) { p.row + 1, p.col });
    }

    // 左边
    if (isValidPosition(p.row, p.col - 1) && board[p.row][p.col - 1] == target) {
        removeAdjacentBlocks((Position) { p.row, p.col - 1 });
    }

    // 右边
    if (isValidPosition(p.row, p.col + 1) && board[p.row][p.col + 1] == target) {
        removeAdjacentBlocks((Position) { p.row, p.col + 1 });
    }
}

int main() {
    initializeBoard();
    printBoard();

    int row1, col1, row2, col2;
    printf("请输入要消除的两个方块的位置坐标(row col): ");
    scanf("%d %d %d %d", &row1, &col1, &row2, &col2);

    Position p1 = { row1, col1 };
    Position p2 = { row2, col2 };

    if (isValidPosition(p1.row, p1.col) && isValidPosition(p2.row, p2.col) && isAdjacent(p1, p2)) {
        char block1 = board[p1.row][p1.col];
        char block2 = board[p2.row][p2.col];

        if (block1 == block2) {
            removeAdjacentBlocks(p1);
            removeAdjacentBlocks(p2);
        }
        else {
            printf("两个方块不相同，不能消除。\n");
        }
    }
    else {
        printf("输入的方块位置不合法或者不相邻，不能消除。\n");
    }

    printf("\n消除后的游戏板：\n");
    printBoard();

    return 0;
}
