//#pragma warning (disable:4996)
//
//#include <stdio.h>
//
//int arr[1000001] = { 0 };
//
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	
//	for (int i = 1; i <= m; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 2; i <= m - 1; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				arr[i] = 1;
//				break;
//			}
//				
//		}
//	}
//	for (int i = 2; i < m; i++)
//	{
//		if (arr[i] != 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}