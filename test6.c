#define _CRT_SECURE_NO_WARNINGS 1
//写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
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