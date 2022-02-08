#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
//int main()
//{
//	printf("%c\n",'\130');
//	printf("%c\n",'\101'); 
//	printf("%d\n", strlen("abcdk"));
//	printf("%d\n", strlen("c:\test\328\test.c"));//转译字符算一个字符
//	return 0;
//}
int main()
{
	int input = 0;
	printf("完成学业去考研:>");
	printf("那要好好学习吗(1/0)?>;");
	scanf("%d", & input);
	if (input == 1)
		printf("可以深究更多知识\n");
	else
		printf("还是要好好学习\n");
	return 0;
}