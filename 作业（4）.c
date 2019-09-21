//求Sn = a + aa + aaa + aaaa + aaaaa的前n项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i =0 ; 
	int n = 0;
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i <= n; i++)
	{
		b = a + a * 10;
		sum += b;
	}
	printf("%d", sum);
	return 0;
}

//求出0～999999之间的所有“水仙花数”#include<stdio.h>
//“水仙花数”是指一个三位数，其各位数字的立方和等于该数本身，
//如；153＝1 ^ 3＋5 ^ 3＋3 ^ 3 ? ，则153是一个“水仙花数”。1234=1^4 + 2^4 + 3^4 +4^4 

/*此程序只针对三位数字（0——999）
#include<stdio.h>
#include<math.h>
int main()
{
int i=0;
int count=0;
double a, b, c;
double x, y, z;
for (i = 0; i <= 999; i++)
{
x = i % 10;
y = (i / 10) % 10;
z = (i / 100) % 10;
a = pow(x, 3);
b = pow(y, 3);
c = pow(z, 3);
if (i == a + b + c)
{
printf("%d\n", i);
count++;
}

}
return 0;
}*/


/* 正确程序0——999999
#include<stdio.h>
#include<math.h>
int main()
{
int i = 0;
for (i = 1; i <= 999999; i++)
{
//求i为几位数
int num = i;
int count = 0;
int sum = 0;
while (num != 0)
{
count++;
num = num / 10;
}
num = i;
while (num != 0)
{
sum += pow((double)(num % 10), (double)count);
num = num / 10;
}
if (sum == i)
{
printf("%d\n", i);
}
}
return 0;
*/



