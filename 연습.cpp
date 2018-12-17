//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<pair<int, int>> v;
//	v.push_back(make_pair(1, 2));
//	v.push_back(make_pair(2, 3));
//	v.push_back(make_pair(2, 4));
//	v.push_back(make_pair(2, 7));
//	v.push_back(make_pair(6, 8));
//	v.push_back(make_pair(9, 2));
//	v.push_back(make_pair(1, 2));
//	v.push_back(make_pair(1, 2));
//	v.push_back(make_pair(1, 2));
//	v.push_back(make_pair(1, 2));
//	v.push_back(make_pair(1, 2));
//	//sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].first << " " << v[i].second << endl;
//	}
//
//	unique(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].first << " " << v[i].second << endl;
//	}
//	return 0;
//}

//void test(int **b)
//{
//
//	b[0][0] = 0;
//	b[0][1] = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//
//	int num = 1;
//	int **board = new int*[5];
//	int **temp = new int*[5];
//	for (int i = 0; i < 5; i++)
//	{
//		board[i] = new int[5];
//		temp[i] = new int[5];
//		for (int j = 0; j < 5; j++)
//		{
//			board[i][j] = num++;
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			temp[i][j] = board[i][j];
//		}
//	}
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << temp[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	test(board);
//	cout << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			board[i][j] = temp[i][j];
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}