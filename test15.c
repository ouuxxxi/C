#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 

//�ݹ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int M(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n*M(n - 1);
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", n*M(n - 1));
	return 0;
}

//�ǵݹ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i;
	int n;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	printf("%d\n", sum);
	return 0;
}