//�����������α�����ֵ��������ֵ�����ݽ��н���
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


