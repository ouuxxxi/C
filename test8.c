#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void s(int n)
{
int i = 0;
for (i = 1; i <= n; i++)
{
int j = 1;
for (j = 1; j <= i; j++)
{
printf("%d*%d=%d\t", i, j, i*j);
}
printf("\n");
}

}
int main()
{
int n ;
printf("����������õ����˼��ĳ˷��ھ���");
scanf("%d",&n);
s(n);
return 0;
}
