#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


#define ROWS 11
#define COLS 11
#define ROW  9
#define COL  9
#define MineNumber 10

// 游戏菜单
void menu();

// 初始化
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char flag);

// 游戏整体逻辑
void game();

// 打印游戏界面
void DisplayBoard(char Board[ROWS][COLS], int rows, int cols);

// 设置雷坐标
void SetMine(char Board[ROW][COL], int row, int col);
// 排雷
void FindMine(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);
// 不是雷置空
void setNUll(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y, int* win);
// 标记雷坐标
void Mark(char show[ROWS][COLS], int x, int y);