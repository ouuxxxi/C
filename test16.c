#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
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