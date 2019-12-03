#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

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
printf("请输入你想得到几乘几的乘法口诀表：");
scanf("%d",&n);
s(n);
return 0;
}
