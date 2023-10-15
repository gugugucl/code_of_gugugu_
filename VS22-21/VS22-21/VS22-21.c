#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int x1 = 0;
//int y1 = 0;
//int solve(int x, int y, int arr[][20])
//{
//	if (x > x1 || y > y1)
//		return 0;
//	int ret = 0;
//	if (arr[x][y] == -2)
//		return 1;
//	if (arr[x][y + 1] == -1 && arr[x + 1][y] == -1&&x+1<=x1&&y+1<=y1)
//	{
//		return 0;
//	}
//	else if (arr[x][y + 1] == -1&&y+1<=y1)
//	{
//		ret = solve(x + 1, y, arr);
//	}
//	else if (arr[x + 1][y] == -1)
//	{
//		ret = solve(x, y + 1, arr);
//	}
//	else
//	{
//		ret = solve(x, y + 1, arr) + solve(x + 1, y, arr);
//	}
//	return ret;
//}
//
//int main()
//{
//	int x2, y2;
//	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//	int arr[20][20] = { 0 };
//	arr[x2][y2] = -1;
//	arr[x2 - 2][y2 - 1] = -1;
//	arr[x2 - 2][y2 + 1] = -1;
//	arr[x2 + 2][y2 - 1] = -1;
//	arr[x2 + 2][y2 + 1] = -1;
//	arr[x2 - 1][y2 + 2] = -1;
//	arr[x2 - 1][y2 - 2] = -1;
//	arr[x2 + 1][y2 + 2] = -1;
//	arr[x2 + 1][y2 - 2] = -1;
//	arr[x1][y1] = -2;
//	int sum = solve(0, 0, arr);
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//
//int x2, y2;
//int solve(int x1, int y1)
//{
//	if (x1 == x2 && y1 == y2)
//	{
//		return 0;
//	}
//	if (x1 == x2 - 1 && y1 == y2 - 2)
//		return 0;
//	if (x1 == x2 - 1 && y1 == y2 + 2)
//		return 0;
//	if (x1 == x2 + 1 && y1 == y2 - 2)
//		return 0;
//	if (x1 == x2 + 1 && y1 == y2 + 2)
//		return 0;
//	if (x1 == x2 - 2 && y1 == y2 - 1)
//		return 0;
//	if (x1 == x2 - 2 && y1 == y2 + 1)
//		return 0;
//	if (x1 == x2 + 2 && y1 == y2 + 1)
//		return 0;
//	if (x1 == x2 + 2 && y1 == y2 - 1)
//		return 0;
//	if (x1 == 1)
//	{
//		if (x2 == 1)
//			return y1 - y2;
//		if (x2 == 3)
//			return y1 - y2 - 1;
//		if (x2 == 2)
//			return y1 - y2 - 2;
//		return y1+1;
//	}
//	else if (y1 == 1)
//	{
//		if (y2 == 1)
//			return x1 - x2;
//		if (y2 == 3)
//			return x1 - x2 - 1;
//		if (y2 == 2)
//			return x1 - x2 - 2;
//		return x1+1;
//	}
//	else
//		return solve(x1 - 1, y1) + solve(x1, y1 - 1);
//}
//
//int main()
//{
//	int x1, y1;
//	scanf("%d %d %d %d", &x1, &y1,&x2,&y2);
//	int ret = solve(x1,y1);
//	printf("%d\n", ret);
//	return 0;
//}



#include <stdio.h>
int main()
{
	long long xb, yb, xh, yh;
	long long board[30][30] = { 0 };
	long long num[30][30] = { 0 };
	scanf("%lld %lld %lld %lld", &xb, &yb, &xh, &yh);
	//为了避免数组越界，所以将数字全部加2
	xb += 2;
	yb += 2;
	xh += 2;
	yh += 2;
	//最上面一行和最左边一列全部都是1
	int i = 0;
	for (i = 2; i <= xb; i++)
	{
		for (int j = 2; j <= yb; j++)
		{
			num[i][j] = 1;
		}
	}

	//把马脚全部赋值为1
	board[xh][yh] = 1;
	board[xh - 1][yh - 2] = 1;
	board[xh - 1][yh + 2] = 1;
	board[xh + 1][yh - 2] = 1;
	board[xh + 1][yh + 2] = 1;
	board[xh - 2][yh - 1] = 1;
	board[xh - 2][yh + 1] = 1;
	board[xh + 2][yh - 1] = 1;
	board[xh + 2][yh + 1] = 1;
	num[2][1] = 1;//第一个格子，也就是棋子的起始点，应该是赋值1的，但是上面的操作该点为0，所以需要进行特殊操作
	for (i = 2; i <= xb; i++)
	{
		for (int j = 2; j <= yb; j++)
		{
			if (board[i][j] == 1)//如果碰到了马脚，就是0
				num[i][j] = 0;
			else
				num[i][j] = num[i - 1][j] + num[i][j - 1];
		}
	}
	printf("%lld\n", num[xb][yb]);
	return 0;
}