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
{//0 ��ʾ��,��0Ϊ��
	int b;
	printf("������һ��ֵ>;",&b);
	scanf("%d",&b);
	int a = b;
	if (a)
	{
		printf("a��Ϊ0");
	}
	//if (!a)
	//{
	//	printf("a����0");
	//}
	else
	{
		printf("a����0");
	}
	return 0;
}