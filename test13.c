#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int s(int n, int k)
{
	if (n == 1) // 1���κδη�������1
	{
		return n;
	}
	else if (k <= 0)
	{
		return 0;
	}
	else if (k == 1) //������1���ݶ�����������
	{
		return n;
	}
	else
	{
		return n*s(n, k - 1);
	}
}
int main()
{
	int n;
	int k;
	scanf("%d%d", &n, &k);
	int a = n*s(n, k - 1);
	printf("%d\n", a);
	return 0;
}

