#include<stdio.h>

int main()
{
	int date = 0;
	scanf_s("%d", &date);
	switch (date)
	{
		//case 1:
		//	printf("星期一\n");
		//	break;
		//case 2:
		//	printf("星期二\n");
		//	break;
		//case 3:
		//	printf("星期三\n");
		//	break;
		//case 4:
		//	printf("星期四\n");
		//	break;
		//case 5:
		//	printf("星期五\n");
		//	break;
		//case 6:
		//	printf("星期六\n");
		//	break; 
		//case 7:
		//	printf("星期日\n");
		//	break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break; 
	case 6:
	case 7:
		printf("休息日\n");
	}
	return 0;
}