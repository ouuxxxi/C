//���0��999999֮������С�ˮ�ɻ���������ˮ�ɻ�������ָһ����λ�������λ���ֵ������͵��ڸ�������
//�磻153��1 ^ 3��5 ^ 3��3 ^ 3 ? ����153��һ����ˮ�ɻ�������1234=1^4 + 2^4 + 3^4 +4^4 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 999999; i++)
	{
		//��iΪ��λ��
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