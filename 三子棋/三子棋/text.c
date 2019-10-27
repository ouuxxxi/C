#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("**********************\n");
	printf("********0.exit********\n");
	printf("********1.play********\n");
	printf("**********************\n");
}

void game()
{
	int ret = 0;


	char board[3][3] = { 0 };
	
	InitBoard(board, 3, 3);//将二维数组棋盘初始化
	
	ShowBoard(board, 3, 3);//打印棋盘

	while (1)//死循环原因：不知道什么时候赢
	{
		PlayerMove(board, 3, 3);//玩家移动
		ret = IsWin(board, 3, 3);//是否赢了
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);//打印
		ComputerMove(board, 3, 3);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);//打印
}

	if (ret = 'X')
	{
		printf("你赢了\n");
	}
	if (ret = 'O')
	{
		printf("你输了\n");
	}
	if (ret = 'Q')
	{
		printf("是平局\n");
	}

}


int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			break;
		}

	} while (input);
	return 0;
}