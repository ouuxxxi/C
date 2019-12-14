//写一个函数返回参数二进制中 1 的个数比如： 15 0000 1111 4 个 1
//程序原型：int count_one_bits(unsigned int value)
//   {
//       返回 1的位数 
//    }

#define _CRT_SECURE_NO_WARNINGS 1
//方法一
#define _CRT_SECURE_NO_WARNINGS 1
int count_one_bits(unsigned int num)
{
	int count = 0;
	while (num != 0)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	return count;//返回count次数
}
int main()
{
	int num;
	printf("请输入整数：");
	scanf("%d", &num);
	printf("整数中1的个数为：%d\n", count_one_bits(num));
	return 0;
}



//方法二
#define _CRT_SECURE_NO_WARNINGS 1
int count_one_bits(unsigned int num)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;//返回count次数
}
int main()
{
	int num;
	printf("请输入整数：");
	scanf("%d", &num);
	printf("整数中1的个数为：%d\n", count_one_bits(num));
	return 0;
}
*/

//方法3
#define _CRT_SECURE_NO_WARNINGS 1
int count_one_bits(unsigned int num)
{
	int count = 0;
	int i = 0;
	while (num != 0)
	{
		num = num&(num - 1);
		count++;
	}
	return count;//返回count次数
}
int main()
{
	int num;
	printf("请输入整数：");
	scanf("%d", &num);
	printf("整数中1的个数为：%d\n", count_one_bits(num));
	return 0;
}
