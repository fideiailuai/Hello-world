#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
//int main()
//{
//	printf("%c\n",'\130');
//	printf("%c\n",'\101'); 
//	printf("%d\n", strlen("abcdk"));
//	printf("%d\n", strlen("c:\test\328\test.c"));//ת���ַ���һ���ַ�
//	return 0;
//}
int main()
{
	int input = 0;
	printf("���ѧҵȥ����:>");
	printf("��Ҫ�ú�ѧϰ��(1/0)?>;");
	scanf("%d", & input);
	if (input == 1)
		printf("���������֪ʶ\n");
	else
		printf("����Ҫ�ú�ѧϰ\n");
	return 0;
}