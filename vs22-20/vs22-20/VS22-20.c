#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)//��������ڴ�ʧ�ܣ�������NULL����ʱ��Ҫ���м��);//malloc�����ڴ�ռ��ʱ�򣬷���ֵ��void���ͣ���Ҫǿ������ת����������Ҫ������
//	
//	{
//		perror("malloc");//�������ʧ�ܣ���ӡ����ԭ��
//		return -1;//��ӡ��֮��ֱ�ӽ�������
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
//	free(p);//ʹ����malloc֮����Ҫ��������ڴ�ռ������ȥ
//	p = NULL;//����ȥ֮��Ҫ��p����ֵΪNULL���������Ұָ��
//	return 0;
//}


#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));//����ռ�
//	if (p == NULL)//����Ƿ�Ϊ��ָ��
//	{
//		perror("calloc");//����ǿ�ָ��ʹ�ӡ������Ϣ
//		return -1;//��ӡ���֮��ͽ����������
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);//ʹ����֮��Ҫ�ͷſռ�
//	p = NULL;//�ͷſռ�֮�󣬽�p��ֵΪNULL���������Ұָ��
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
	//ͻȻ����5��int���ͣ���20���ֽڲ�������ô��
	//��ʱ����ʱ��realloc�������е���
	realloc(p, 10 * sizeof(int));
	
	return 0;
}