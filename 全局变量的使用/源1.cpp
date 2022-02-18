#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int g_val;//声明外部符号
int e_vel;
static int f_vel=0;
extern int Add(int,int);
int main()
{
	int a = 5;
	f_vel = a + 3;
	g_val = a + 2;
	int sum= Add(f_vel, g_val);
	printf("%d\n", sum);
//	printf("%d\n", e_val); e_val是static在其他文件内修饰的
	printf("%d\n", g_val);
	printf("%d\n", f_vel);
	return 0;
}