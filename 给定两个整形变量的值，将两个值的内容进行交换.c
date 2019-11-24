//给定两个整形变量的值，将两个值的内容进行交换
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d\n", a, b);
	return 0;
}


