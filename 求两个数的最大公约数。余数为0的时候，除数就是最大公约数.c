//�������������Լ��������Ϊ0��ʱ�򣬳����������Լ�� 
#include<stdio.h>
int main()
{
	int a��b, n;
	scanf("%d%d", &a,&b);
	n = ( a>b )? b : a;
	while (a % n != 0 || b % n != 0)
	{
		n--;
	}
	printf("���Լ�� ��%d\n",n);
	return 0;
}