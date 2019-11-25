//求两个数的最大公约数。余数为0的时候，除数就是最大公约数 
#include<stdio.h>
int main()
{
	int a，b, n;
	scanf("%d%d", &a,&b);
	n = ( a>b )? b : a;
	while (a % n != 0 || b % n != 0)
	{
		n--;
	}
	printf("最大公约数 ：%d\n",n);
	return 0;
}