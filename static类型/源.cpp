#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	int a = 1;
//	a++;//�ֲ�����
//	printf("%d\n", a);
//}
void test()
{
	static int a = 1;
	a++;//ȫ�ֱ���
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	while(i<10)
	{
		test();
		i++;
	}
	return 0;
}