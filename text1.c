#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下1到 100 的所有整数中出现多少个数字9
#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("一共出现了%d", count);
	return 0;
}