//#pragma warning (disable:4996)
//
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int a, b;
//	scanf("%d%d%d", &n, &a, &b);
//
//	for (int i = 31; i >= 0; i--)
//	{
//		int temp = (n >> i) & 1;
//		if (temp == 0)
//			printf("0");
//		else printf("1");
//	}
//	printf("\n");
//	for (int i = a; i <= b; i++)
//	{
//		int temp = 1 << i-1;
//		n = n ^ temp;
//	}
//	for (int i = 31; i >= 0; i--)
//	{
//		int temp = (n >> i) & 1;
//		if (temp == 0)
//			printf("0");
//		else printf("1");
//	}
//	printf("\n");
//}