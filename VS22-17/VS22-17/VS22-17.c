#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//enum Options
//{
//	EIXT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//void menu()
//{
//	printf("###########################\n");
//	printf("######1.add  2.sub#########\n");
//	printf("######3.mul  4.div#########\n");
//	printf("#########0.exit############\n");
//	printf("###########################\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case SUB:
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case MUL:
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case DIV:
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case EIXT:
//			printf("安全退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//
//#define add 1
//
//#include <stdio.h>
//
//enum color
//{
//	RED = 1,
//	BLUE = 2,
//	GREEN
//};
//
//int main()
//{
//	enum color clr = GREEN;
//	printf("%zd\n", sizeof(enum color));
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(10*sizeof(int));//根据自己的需要去确定类型
	if (p == NULL)//使用之前一定要检查malloc是否成功开辟空间
	{
		perror("malloc");
		return 1;//如果没有成功开辟，打印了错误原因之后，直接结束程序
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;//赋值
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));//打印
	}

	free(p);//使用完分配的空间之后一定要释放内存空间。
	p = NULL;//释放内存空间之后，p就变成了野指针，需要将其给置为NULL，才能避免出现野指针
	return 0;
}