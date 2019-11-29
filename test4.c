//求出0～999999之间的所有“水仙花数”，“水仙花数”是指一个三位数，其各位数字的立方和等于该数本身，
//如；153＝1 ^ 3＋5 ^ 3＋3 ^ 3 ? ，则153是一个“水仙花数”。1234=1^4 + 2^4 + 3^4 +4^4 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 999999; i++)
	{
		//求i为几位数
		int num = i;
		int count = 0;
		int sum = 0;
		while (num != 0)
		{
			count++;
			num = num / 10;
		}
		num = i;
		while (num != 0)
		{
			sum += pow((double)(num % 10), (double)count);
			num = num / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;