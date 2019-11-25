#define  CRT SECURE NO WARNINGS  1
//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ
#include <stdio.h>
int main()
{
	int i = 1;
	float sum;
	float sum1;
	float sum2;
	
	for (i = 1, i <= 100, i = i + 2)
	{
		sum1 += 1/i;
	}
	for (i = 1, i <= 99, i = i + 1)
	{
		sum2 += 1/i;
	}
	sum = sum2 + (-sum1)
	return 0;
}