#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

#define WIDTH 20
#define HEIGHT 20

int gameOver;
int x, y; // 蛇头的坐标
int fruitX, fruitY; // 水果的坐标
int score;
int tailX[100], tailY[100];
int nTail; // 蛇尾的长度
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
}

void Draw() {
    system("cls"); // 清屏

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int j = 0; j < HEIGHT; j++) {
        for (int i = 0; i < WIDTH; i++) {
            if (i == 0)
                printf("#");
            if (j == y && i == x)
                printf("O");
            else if (j == fruitY && i == fruitX)
                printf("F");
            else {
                int printTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == i && tailY[k] == j) {
                        printf("o");
                        printTail = 1;
                        break;
                    }
                }
                if (!printTail)
                    printf(" ");
            }

            if (i == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = 1;
            break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }

    if (x >= WIDTH || x < 0 || y >= HEIGHT || y < 0)
        gameOver = 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(10); // 控制游戏速度
    }
    return 0;
}
