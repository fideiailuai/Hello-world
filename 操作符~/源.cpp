#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 0;//�������ڴ��е��ǲ���~
//	printf("%d\n", ~a);//һ�������ڶ������������ֱ�ʾ��ʽ
//	return 0;//ԭ��,����,����
//}
int main()
{
	int a = 10;
	int b = a++;//����++;��ʹ��,��++
	int c = 10;
	int d = ++c;//ǰ��++;��++,��ʹ��
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	return 0;
}