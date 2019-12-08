#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int s(int n, int k)
{
	if (n == 1) // 1的任何次方都等于1
	{
		return n;
	}
	else if (k <= 0)
	{
		return 0;
	}
	else if (k == 1) //它本身1次幂都等于它本身
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

