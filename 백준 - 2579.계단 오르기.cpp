//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int a[301] = { 0, };
//int D[301][3] = { 0, };
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> a[i];
//	}
//
//	D[1][1] = a[1];
//	D[2][1] = D[1][1] + a[2];
//	D[2][2] = a[2];
//
//	for (int i = 3; i <= N; i++)
//	{
//		D[i][1] = D[i - 1][2] + a[i];
//		D[i][2] = max(D[i - 2][1], D[i - 2][2]) + a[i];
//	}
//	int Max = max(D[N][1], D[N][2]);
//	cout << Max << endl;
//
//	return 0;
//}