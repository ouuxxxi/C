//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�������������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void reverse_string(char * str)
{
	if (*str != '\0')
	{
		str++;
		reverse_string(str);
		printf("%c", *(str - 1));
	}


}
int main()
{
	char *str = "abcdef";
	reverse_string(str);
	return 0;
}