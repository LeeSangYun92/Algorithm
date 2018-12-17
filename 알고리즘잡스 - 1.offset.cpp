//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<pair<int, int> > v;
//	int board[7][7];
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j< 7; j++)
//		{
//			board[i][j] = 11;
//		}
//	}
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 1; j< 6; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 1; i< 6; i++)
//	{
//		for (int j = 1; j < 6; j++)
//		{
//			int value = board[i][j];
//			if (value >= board[i - 1][j])
//				continue;
//			if (value >= board[i + 1][j])
//				continue;
//			if (value >= board[i][j - 1])
//				continue;
//			if (value >= board[i][j + 1])
//				continue;
//
//			v.push_back(make_pair(i, j));
//		}
//	}
//	for (int i = 0; i< v.size(); i++)
//	{
//		board[v[i].first][v[i].second] = -1;
//	}
//
//	for (int i = 1; i< 6; i++)
//	{
//		for (int j = 1; j < 6; j++)
//		{
//			if (board[i][j] == -1)
//				cout << "* ";
//			else {
//				cout << board[i][j] << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}