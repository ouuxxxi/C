//�����������Ӵ�С���

#include<stdio.h>
int main()
{
	int a, b, c, n;
	printf("��������������\n")
		scanf("%d%d%d", &a, &b, &c)
	if (a < b)
	{
		n = a;
		a = b;
		b = n;

	}
	if (b < c)
	{
		n = b;
		b = c;
		c = n;

	}
	if (a < c)
	{
		n = a;
		a = c;
		c = n;
	}
	printf("%d%d%d,a,b,c");
	return 0;
}