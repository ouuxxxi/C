//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19��
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
