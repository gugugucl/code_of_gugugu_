#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)//如果开辟内存失败，将返回NULL，此时需要进行检查);//malloc开辟内存空间的时候，返回值是void类型，需要强制类型转换成我们需要的类型
//	
//	{
//		perror("malloc");//如果开辟失败，打印错误原因
//		return -1;//打印完之后，直接结束程序
//	}
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	free(p);//使用完malloc之后，需要将申请的内存空间给还回去
//	p = NULL;//还回去之后，要将p给赋值为NULL，避免出现野指针
//	return 0;
//}


#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));//申请空间
//	if (p == NULL)//检查是否为空指针
//	{
//		perror("calloc");//如果是空指针就打印错误信息
//		return -1;//打印完成之后就结束错误程序
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);//使用完之后要释放空间
//	p = NULL;//释放空间之后，将p赋值为NULL，避免出现野指针
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL);
	{
		perror("malloc");
		return -1;
	}
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", p + i);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}
	//突然发现5个int类型，即20个字节不够了怎么办
	//这时可以时候realloc函数进行调整
	realloc(p, 10 * sizeof(int));
	
	return 0;
}