#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд
//�ַ�����������ֲ������123ABCD45efG == > abcdEFg
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch > 'a' && ch < 'z')
		{
			putchar(ch - 32);
		}
		if (ch > 'A' && ch < 'Z')
		{
			putchar(ch + 32);
		}
	}
	return 0;
}
