#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ��1�� 100 �����������г��ֶ��ٸ�����9
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
	printf("һ��������%d", count);
	return 0;
}