#define _CRT_SECURE_NO_WARNINGS 1
//д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#include<stdio.h>
int s(int a[], int n, int len)
{
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (n <a[mid])
		{
			right = mid - 1;
		}
		else if (n >a[mid])
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int index = s(a, 5, 10);
	printf("%d\n", index);
	return 0;
}