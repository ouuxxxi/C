#pragma once//Ԥ��ͷ�ļ��ظ�����
#define ROW 3
#define COL 3
#include<string.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void InitBoard(char board[][COL], int row, int col);//��ʼ������  ����

void ShowBoard(char board[][COL], int row, int col);//��ӡ����

void PlayerMove(char board[][COL], int row, int col);//����ƶ�

int IsWin(char board[][COL], int row, int col);//�ж��Ƿ�Ӯ��

void ComputerMove(char board[][COL], int row, int col);//�����ƶ�