#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	//if (a > b)
	//max = a;
	//else
	//{
	//	max = b;
	//}
	max = a > b ? a : b;
	printf("%d\n", max);
	return 0;
}