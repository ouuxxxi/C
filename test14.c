//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int num)
{
	int a;
	int sum = 0;
	int count = 0;
	if (num != 0)
	{
		a = num % 10;
		num = num / 10;
		sum = a + DigitSum(num);
	}
	return sum;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", DigitSum(num));
	return 0;
}
