#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[][COL], int row, int col) //���̳�ʼ��
{
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//int j = 0;
	//	for (j = 0; j < col; j++)
	//	{
	//		board[i][j] = ' ';//i��j����Ӧ��ֵ��Ϊ�ո�
	//	}
	//}
	memset(board,' ',row * col * sizeof(char));//�����ڴ棬���д�����������������һ��
	                                           //board:������һ���ڴ棻' '������Ϊ�ո�;row * col * sizeof(char):����Ϊ�����ֽ�
}


void ShowBoard(char board[][COL], int row, int col)//��ӡ����
{
	int i = 0;
	for (i = 0; i < row; i++) // row:���пո�
	{
	    int j = 0;
		for (j = 0; j < col; j++)// col�� ���пո�
		{
			printf(" %c ", board[i][j]);   // ���οո��������ߣ�   |   |   ��
			if (j < col-1)
				printf("|");
		}
		
		printf("\n");//��ӡ��һ���ٻ���

		if (i < row-1)// row-1:�����»���
		{
			for (j = 0; j < col; j++)
			{
				printf("---");//�»��ߴ�ӡ3��
				if (j < col - 1)
					printf("|"); //  �����»����������ߣ� ---|---|--- ��
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
		printf("����ƶ�\n");
		printf("������1��3�����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y <= 3)// ˵�������ǺϷ���
		{
			if (board[x - 1][y - 1] == ' ') //������±��Ǵ�0��ʼ�ģ�������������1��3����ʵӦ����0-2��
				                            // �жϴ�λ���Ƿ��¹���;��λ�õ��ڿո�ʱ����ʾû�б��¹����ӣ�
			{
				board[x - 1][y - 1] = 'X';
				break;//ֻ�����������ǺϷ����ҷ��꣬��������ѭ��
			}
			else
			{
				printf("��λ���Ѿ��¹�����\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
	}
}


 static int IsFull(char board[][COL], int row, int col) //�ж��Ƿ����� (��static,�����������ƣ�ֻ�������º�������)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//���ڿո�ʱ����ʾû��
			{
				return 0;
			}
		}
	}
	return 1;//����
}



int IsWin(char board[][COL],int row,int col)//�жϸ���λ�������Ƿ�һ��������һ���ߣ�
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// ����������һ����
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//��
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
		//��Խ���
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		//�ҶԽ���
		if (board[0][2] == board[1][1] && board[1][1] == board[2][2] && board[2][0] != ' ')
		{
			return board[0][2];
		}
		//ƽ��
		if (IsFull(board,row,col) == 1) //��ʾ��ƽ��
		{
			return 'Q';//ƽ��
		}
	}
	return ' ';//û��ƽ����û��Ӯ��
}

void ComputerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ƶ�\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')//���ڿո�ſ����������������
		{
			board[x][y] = 'O ';
			break;
		}
	}
}