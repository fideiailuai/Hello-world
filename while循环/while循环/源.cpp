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
	//	//��whileѭ����break������ֹѭ��
	//	//continue��������ѭ�������Ĵ���
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
	printf("����������:>");
	scanf("%s", password);//scanf���ܶ�ȡ�ո�������Ϣ
	//gets
	printf("��ȷ������Y/N:>");
	//��������
	//getchar();�����\n
	//
	//���������еĶ���ַ�
	int tmp;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
		printf("���������:>%s", password);
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}