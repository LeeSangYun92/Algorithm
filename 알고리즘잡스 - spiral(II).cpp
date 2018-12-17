//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int num = 1;
//
//	int **board = new int*[n];
//	for (int i = 0; i< n; i++)
//	{
//		board[i] = new int[n];
//	}
//
//	for (int i = 0; i< n / 2 + 1; i++)
//	{
//		for (int j = i; j < n - i; j++)
//		{
//			board[i][j] = num++;
//		}
//
//		for (int j = i + 1; j< n - i; j++)
//		{
//			board[j][n - i - 1] = num++;
//		}
//
//		for (int j = n - i - 2; j >= i; j--)
//			board[n - i - 1][j] = num++;
//
//		for (int j = n - i - 2; j >= i + 1; j--)
//			board[j][i] = num++;
//	}
//
//	for (int i = 0; i< n; i++)
//	{
//		for (int j = 0; j< n; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
