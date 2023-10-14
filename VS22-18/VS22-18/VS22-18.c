#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void solve()
//{
//	char arr[11][11] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		char d = getchar();
//		int j = 0;
//		for (j = 1; j <= 10; j++)
//		{
//			scanf("%c", &arr[i][j]);
//		}
//	}
//	int ret = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 10; j++)
//		{
//			if (arr[i][j] == 'X')
//			{
//				int c = i>j?j:i;
//				if (i + j >= 12)
//				{
//					c = 10 - (i > j ? i : j)+1;
//				}
//				ret += c;
//			}
//		}
//	}
//	printf("%d\n", ret);
//	return;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num--)
//	{
//		solve();
//	}
//	return 0;
//}

//
//#include <stdio.h>
//
//int solve()
//{
//	int n, k, x;
//	int ret = 0;
//	scanf("%d %d %d", &n, &k, &x);
//	if (k > n)
//		return -1;
//	if (k > x + 1)
//		return -1;
//	if (k == x)
//		x--;
//	if (k == 0)
//	{
//		while (n--)
//		{
//			ret += x;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			
//			if (i < k)
//			{
//				ret += i;
//			}
//			else
//			{
//				ret += x;
//			}
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num--)
//	{
//		int ret = solve();
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//int main()
//{
//	char ch1[1000] = { 0 };
//	gets(ch1);
//	for (int i = 0; i < strlen(ch1); i++)
//	{
//		if (ch1[i] == '_')
//			ch1[i] = '-';
//		if (isupper(ch1[i]))
//		{
//			ch1[i] = tolower(ch1[i]);
//		}
//	}
//	char ch2[100] = "solution-";
//	char* p = strcat(ch2, ch1);
//	printf("%s\n",p);
//	return 0;
//}
//

#include <stdio.h>
int main()
{
	printf("4396 = 28 x 157\n");
	printf("5346 = 18 x 297\n");
	printf("5346 = 27 x 198\n");

	printf("5796 = 12 x 483\n");
	printf("5796 = 42 x 138\n");
	printf("6952 = 4 x 1738\n");
	printf("7254 = 39 x 186\n");
	printf("7632 = 48 x 159\n");
	printf("7852 = 4 x 1963\n");
	return 0;
}
