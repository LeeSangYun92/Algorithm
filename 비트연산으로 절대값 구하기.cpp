//#pragma warning (disable:4996)
//
//#include <stdio.h>
//
//int abs(int n)
//{
//	int temp = n >> 31;
//	temp = (temp^n) + (temp & 1);
//	return temp;
//}
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//
//	printf("%d\n", abs(n));
//}