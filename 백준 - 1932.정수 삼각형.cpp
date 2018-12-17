//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int a[501][501] = { 0, };
//int D[501][501] = { 0, };
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	D[1][1] = a[1][1];
//	D[2][1] = D[1][1] + a[2][1];
//	D[2][2] = D[1][1] + a[2][2];
//
//	for (int i = 3; i <= N; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			D[i][j] = max(D[i - 1][j-1], D[i - 1][j]) + a[i][j];
//		}
//	}
//	int Max = D[N][1];
//	for (int i = 2; i <= N; i++)
//	{
//		Max = max(D[N][i], Max);
//	}
//	cout << Max << endl;
//	return 0;
//}