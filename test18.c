//дһ���������ز����������� 1 �ĸ������磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�int count_one_bits(unsigned int value)
//   {
//       ���� 1��λ�� 
//    }

#define _CRT_SECURE_NO_WARNINGS 1
//����һ
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
	return count;//����count����
}
int main()
{
	int num;
	printf("������������");
	scanf("%d", &num);
	printf("������1�ĸ���Ϊ��%d\n", count_one_bits(num));
	return 0;
}



//������
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
	return count;//����count����
}
int main()
{
	int num;
	printf("������������");
	scanf("%d", &num);
	printf("������1�ĸ���Ϊ��%d\n", count_one_bits(num));
	return 0;
}
*/

//����3
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
	return count;//����count����
}
int main()
{
	int num;
	printf("������������");
	scanf("%d", &num);
	printf("������1�ĸ���Ϊ��%d\n", count_one_bits(num));
	return 0;
}
