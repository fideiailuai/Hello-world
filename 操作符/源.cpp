#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//
//	return 0;
//}
int main()
{//0 表示假,非0为真
	int b;
	printf("请输入一个值>;",&b);
	scanf("%d",&b);
	int a = b;
	if (a)
	{
		printf("a不为0");
	}
	//if (!a)
	//{
	//	printf("a等于0");
	//}
	else
	{
		printf("a等于0");
	}
	return 0;
}