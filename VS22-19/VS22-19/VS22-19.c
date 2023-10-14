#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <ctype.h>
//
//int my_isupper(int c)
//{
//	if (c >= 'A' && c <= 'Z')
//		return 1;
//		return 0;
//}
//
//int my_islower(int c)
//{
//	if (c >= 'a' && c <= 'z')
//		return 2;
//	return 0;
//}
//
//int my_tolower(int c)
//{
//	if (c >= 'A' && c <= 'Z')
//		return c + 32;
//}
//
//int my_toupper(int c)
//{
//	if(c >= 'a' && c <= 'z')
//		return c - 32;
//}
//int main()
//{
//	char ch[1000] = { 0 };
//	gets(ch);
//	printf("%s\n", ch);
//	int i = 0;
//	while (ch[i])
//	{
//		if (my_isupper(ch[i]))
//		{
//			ch[i] = my_tolower(ch[i]);
//		}
//		else if (my_islower(ch[i]))
//		{
//			ch[i] = my_toupper(ch[i]);
//		}
//		i++;
//	}
//	printf("%s\n", ch);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//size_t my_strlen(const char* ptr)
//{
//	if (*ptr == '\0')
//		return 0;
//	return 1 + my_strlen(ptr +1);
//}
//int main()
//{
//	char ch[1000] = { 0 };
//	gets(ch);
//	size_t len1=strlen(ch);
//	size_t len2=my_strlen(ch);
//
//	printf("%zd,%zd\n", len1, len2);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//char* my_strcpy(char* ch1, const char* ch2)
//{
//	assert(ch1 && ch2);
//	char* ret = ch1;
//	while (*(ch1++) = *(ch2++));
//	return ret;
//}
//int main()
//{
//	char ch1[1000] = { 0 };
//	char ch2[1000] = { 0 };
//	char ch3[1000] = { 0 };
//	gets(ch2);
//	printf("%s\n", ch2);
//	char *pf =strcpy(ch1, ch2);
//	printf("%s\n", pf);
//	char * pf1=my_strcpy(ch3, ch1);
//	printf("%s\n", pf1);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char* ch1, const char* ch2)
//{
//	assert(ch1 && ch2);
//	char* ret = ch1;
//	while (*ch1 != '\0')
//	{
//		ch1++;
//	}
//	while (*(ch1++) = *(ch2++));
//	return ret;
//}
//int main()
//{
//	char ch1[1000] = "hello";
//	char ch2[1000] = " world";
//	char* p = my_strcat(ch1, ch2);
//	printf("%s\n", p);
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* ch1, const char* ch2)
//{
//	assert(ch1 && ch2);
//	while (*ch1 == *ch2)
//	{
//		ch1++;
//		ch2++;
//		if (*ch1 == '\0')
//			return 0;
//	}
//	return *ch1 - *ch2;
//}
//int main()
//{
//	char ch1[1000] = { 0 };
//	gets(ch1);
//	char ch2[1000] = { 0 };
//	gets(ch2);
//	int ret = my_strcmp(ch1, ch2);
//	if (ret > 0)
//		printf(">\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf("<\n");
//	return 0;
//}
//
//#include <stdio.h>
//struct S 
//{
//	char b : 1;
//	int a :  2;
//	
// };
//int main()
//{
//	printf("%zd", sizeof(struct S));
//	return 0;
//}


//#include <stdio.h>
////
////struct gift
//{
//	int num_stock;
//	int price;
//	int type;
//	//book
//	char name_book[100];
//	char author_book[1000];
//	int num_page;
//	//cup
//	char design_cup[100];
//	//T_shirt
//	char design_T_shirt[100];
//	int size;
//	char color[100];
//};
//
//struct gift
//{
//	int stock;
//	int price;
//	int type;
//
//	union 
//	{
//		int num_page;
//		const char* author;
//	}book;
//
//	union 
//	{
//		char design[100];
//	}cup;
//
//	union 
//	{
//		char design[100];
//		int size;
//		char color[100];
//	}T_shirt;
//};
//int main()
//{
//	struct gift list = { 0 };
//	list.stock = 100;
//	list.price = 10000;
//	list.type = 2;
//
//	list.book.author = "chenliang";
//	printf("%d %d %d %d %s\n", list.stock, list.price, list.type, list.book.num_page, list.book.author);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	union
//	{
//		int a;
//		char b;
//	}x;
//
//	x.a = 1;
//	if (x.b)
//		printf("Ð¡¶Ë\n");
//	else
//		printf("´ó¶Ë\n");
//	return 0;
//}



//#include <stdio.h>
// 
//enum day
//{
//	MON=1,
//	THU,
//	WENS,
//	THIR=6,
//	FIR,
//	STR=6,
//	SUN
//};
//
//int main()
//{
//	enum day d = SUN;
//	printf("%d\n", d);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a[100] = { 0 };
	int b[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	int t = 0;
	scanf("%d", &t);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (100 / a[i]) * b[i];
	}
	if (sum >= t)
		printf("Already Au\n");
	else
	{
		int sub = t - sum;
		for (int i = 0; i < n; i++)
		{
			if ((a[i] - b[i]) * (100 / a[i]) < sub)
				printf("NAN\n");
			else
			{
				int ret = sub / (100 / a[i]);
				if(sub%(100/a[i])==0)
				printf("%d\n", ret);
				else
				{
					printf("%d\n", ret + 1);
				}
			}
		}
	}
	return 0;
}
