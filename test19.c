//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。5 0000 0101 6 0000 0110
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);

	printf("奇数序列："); //从0开始 二进制 2零次方/一次方... 所以此时是奇数列
	for (i = 30; i >= 0; i = i - 2) //从右往左算 右边第一个为第一位 所以倒着来
	{
		printf("%d ", (num >> i) & 1);//向右移动i位
	}

	printf("\n");

	printf("偶数序列：");
	for (i = 31; i >= 0; i = i - 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	return 0;
}