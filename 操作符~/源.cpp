#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 0;//整数在内存中的是补码~
//	printf("%d\n", ~a);//一个整数在二进制中有三种表示方式
//	return 0;//原码,反码,补码
//}
int main()
{
	int a = 10;
	int b = a++;//后置++;先使用,后++
	int c = 10;
	int d = ++c;//前置++;先++,后使用
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	return 0;
}