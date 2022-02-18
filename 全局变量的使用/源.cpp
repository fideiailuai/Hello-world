#define _CRT_SECURE_NO_WARNINGS 1
int g_val = 2022;//全局变量
int Add(int x, int y)
{
	return x + y;
}
static int e_val = 2023;//static修饰全局变量
//使得全局变量只能在自己所在的源文件内部使用