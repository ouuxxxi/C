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
	
	InitBoard(board, 3, 3);//����ά�������̳�ʼ��
	
	ShowBoard(board, 3, 3);//��ӡ����

	while (1)//��ѭ��ԭ�򣺲�֪��ʲôʱ��Ӯ
	{
		PlayerMove(board, 3, 3);//����ƶ�
		ret = IsWin(board, 3, 3);//�Ƿ�Ӯ��
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);//��ӡ
		ComputerMove(board, 3, 3);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);//��ӡ
}

	if (ret = 'X')
	{
		printf("��Ӯ��\n");
	}
	if (ret = 'O')
	{
		printf("������\n");
	}
	if (ret = 'Q')
	{
		printf("��ƽ��\n");
	}

}


int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��������Ĳ�����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			break;
		}

	} while (input);
	return 0;
}