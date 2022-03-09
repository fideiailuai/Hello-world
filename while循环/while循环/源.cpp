#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
int main()
{
	/*while (1)
	{
		printf("turn");
	}*/
	//int i = 0;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;
	//	//在while循环中break用于终止循环
	//	//continue跳过本次循环后续的代码
	//	printf("%d ", i);
	//	i++;
	//}
	//int ch = 0;
	//while ((ch = getchar()) != EOF)	//EOF end of file
	//{
	//	//printf("%c", ch);
	//	putchar(ch);
	//}
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//scanf不能读取空格后面的信息
	//gets
	printf("请确认密码Y/N:>");
	//清理缓冲区
	//getchar();处理掉\n
	//
	//清理缓冲区中的多个字符
	int tmp;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
		printf("你的密码是:>%s", password);
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}