#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[][COL], int row, int col) //棋盘初始化
{
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//int j = 0;
	//	for (j = 0; j < col; j++)
	//	{
	//		board[i][j] = ' ';//i和j所对应的值置为空格
	//	}
	//}
	memset(board,' ',row * col * sizeof(char));//设置内存，此行代码与上述代码作用一样
	                                           //board:设置哪一块内存；' '：设置为空格;row * col * sizeof(char):设置为多大的字节
}


void ShowBoard(char board[][COL], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++) // row:三行空格
	{
	    int j = 0;
		for (j = 0; j < col; j++)// col： 三列空格
		{
			printf(" %c ", board[i][j]);   // 三次空格两条竖线（   |   |   ）
			if (j < col-1)
				printf("|");
		}
		
		printf("\n");//打印完一行再换行

		if (i < row-1)// row-1:两行下划线
		{
			for (j = 0; j < col; j++)
			{
				printf("---");//下划线打印3次
				if (j < col - 1)
					printf("|"); //  三次下划线两条竖线（ ---|---|--- ）
			}	
		}
		printf("\n");
	}
}


void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1) 
	{
		printf("玩家移动\n");
		printf("请输入1—3的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y <= 3)// 说明坐标是合法的
		{
			if (board[x - 1][y - 1] == ' ') //数组的下标是从0开始的，所以玩家输入的1—3，其实应该是0-2；
				                            // 判断此位置是否被下过棋;此位置等于空格时，表示没有被下过棋子；
			{
				board[x - 1][y - 1] = 'X';
				break;//只有满足坐标是合法的且放完，才能跳出循环
			}
			else
			{
				printf("该位置已经下过棋子\n");
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}
}


 static int IsFull(char board[][COL], int row, int col) //判断是否满了 (加static,作用域受限制，只能在以下函数中用)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//等于空格时，表示没满
			{
				return 0;
			}
		}
	}
	return 1;//满了
}



int IsWin(char board[][COL],int row,int col)//判断各个位置坐标是否一样（连成一条线）
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// 代表行连成一条线
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
		//左对角线
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		//右对角线
		if (board[0][2] == board[1][1] && board[1][1] == board[2][2] && board[2][0] != ' ')
		{
			return board[0][2];
		}
		//平局
		if (IsFull(board,row,col) == 1) //表示是平局
		{
			return 'Q';//平局
		}
	}
	return ' ';//没有平局且没有赢家
}

void ComputerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑移动\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')//等于空格才可以往棋盘里放棋子
		{
			board[x][y] = 'O ';
			break;
		}
	}
}