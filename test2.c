#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Menu()
{
	printf("******************************\n");
	printf("*******猜数字游戏************\n");
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
		printf("请输入你要猜的数字: ");
		scanf("%d", &input);
		if (input <randNum)
		{
			printf("你猜小了\n");
		}
		else if (input > randNum)
		{
			printf("你猜大了\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("请输入你的操作: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default://输入的不是1或0
			printf("重新输入\n");
			break;
		}
	} while (input);
	return 0;
}