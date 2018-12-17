//#pragma warning (disable:4996)
//
//#include <stdio.h>
//int compare(int n, int m)
//{
//	for (int i = 31; i >= 0; i--)
//	{
//		int temp_n = (n >> i) & 1;
//		int temp_m = (m >> i) & 1;
//		if (temp_n == 1 && temp_m == 0)
//			return n;
//		else if (temp_n == 0 && temp_m == 1)
//			return m;
//		else if ((temp_n == 0 && temp_m == 0) || (temp_n == 1 && temp_m == 1))
//			continue;
//	}
//}
//
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//
//	printf("%d\n", compare(n, m));
//
//	return 0;
//}