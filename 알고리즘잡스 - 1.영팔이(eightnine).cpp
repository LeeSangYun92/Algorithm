//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int **board = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		board[i] = new int[m];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = m - 1; j >= 0; j--)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}