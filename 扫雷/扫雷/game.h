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

// ��Ϸ�˵�
void menu();

// ��ʼ��
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char flag);

// ��Ϸ�����߼�
void game();

// ��ӡ��Ϸ����
void DisplayBoard(char Board[ROWS][COLS], int rows, int cols);

// ����������
void SetMine(char Board[ROW][COL], int row, int col);
// ����
void FindMine(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);
// �������ÿ�
void setNUll(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y, int* win);
// ���������
void Mark(char show[ROWS][COLS], int x, int y);