#define _CRT_SECURE_NO_WARNINGS 1
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰn��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i <= n; i++)
	{
		b = a + a * 10;
		sum += b;
	}
	printf("%d", sum);
	return 0;
}