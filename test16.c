#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位 
#include <stdio.h>
void P(int n)
{
	if (n > 9)
	{
		P(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int n;
	scanf("%d", &n);
	P(n);
	return 0;

}