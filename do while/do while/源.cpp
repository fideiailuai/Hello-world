#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int x = 1;
	int y = 0;
	printf("����һ��ֵ������Ľ׳�:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{	
		x *= i;
		y += x;
	}
	printf("%d\n", y);
	return 0;
}