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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("��������������\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case SUB:
//			printf("��������������\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case MUL:
//			printf("��������������\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case DIV:
//			printf("��������������\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case EIXT:
//			printf("��ȫ�˳�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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
	int* p = (int*)malloc(10*sizeof(int));//�����Լ�����Ҫȥȷ������
	if (p == NULL)//ʹ��֮ǰһ��Ҫ���malloc�Ƿ�ɹ����ٿռ�
	{
		perror("malloc");
		return 1;//���û�гɹ����٣���ӡ�˴���ԭ��֮��ֱ�ӽ�������
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;//��ֵ
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));//��ӡ
	}

	free(p);//ʹ�������Ŀռ�֮��һ��Ҫ�ͷ��ڴ�ռ䡣
	p = NULL;//�ͷ��ڴ�ռ�֮��p�ͱ����Ұָ�룬��Ҫ�������ΪNULL�����ܱ������Ұָ��
	return 0;
}