#pragma once//预防头文件重复引用
#define ROW 3
#define COL 3
#include<string.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void InitBoard(char board[][COL], int row, int col);//初始化棋盘  声明

void ShowBoard(char board[][COL], int row, int col);//打印棋盘

void PlayerMove(char board[][COL], int row, int col);//玩家移动

int IsWin(char board[][COL], int row, int col);//判断是否赢了

void ComputerMove(char board[][COL], int row, int col);//电脑移动