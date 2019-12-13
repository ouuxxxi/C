//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数。
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