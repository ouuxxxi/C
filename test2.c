#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Menu()
{
	printf("******************************\n");
	printf("*******��������Ϸ************\n");
	printf("*******1.play*****************\n");
	printf("*******0.exit******************\n");
	printf("*******************************\n");
}
void game()
{
	//printf("play youxi\n");
	//RAND_MAX;//0 - 32767
	int input = 0;
	int randNum = rand() % 100 + 1;//[1,101)
	printf("%d\n", randNum);
	while (1)
	{
		printf("��������Ҫ�µ�����: ");
		scanf("%d", &input);
		if (input <randNum)
		{
			printf("���С��\n");
		}
		else if (input > randNum)
		{
			printf("��´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	//time_t;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��������Ĳ���: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default://����Ĳ���1��0
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}