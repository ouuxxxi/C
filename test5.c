#define _CRT_SECURE_NO_WARNINGS 1
//��д����ģ��������������ĳ����� ����������������룬������ȷ����ʾ����¼�ɹ���,
// ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
#include<stdio.h>
#include<string.h>
int main()
{
	int count = 3;
	char password[6];
	while (count > 0)
	{
		printf("������������룺");
		scanf("%s", &password);
		if (strcmp(password, "1234") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			count--;
			printf("�㻹��%d�λ���\n", count);
		}
	}
	return 0;

}