//#include <iostream>
//#include <queue>
//#include <string>
// 
//using namespace std;
//void BFS(int **board, int *visit, int N)
//{
//	queue<int> q;
//	q.push(0);
//	visit[0] = 1;
//
//	while (!q.empty())
//	{
//		int current = q.front();
//		q.pop();
//		for (int i = 0; i < N; i++)
//		{
//			if (board[current][i] == 1 && visit[i] != 1 && visit[i] != 2)
//			{
//				q.push(i);
//				if (visit[current] == 1)
//					visit[i] = 2;
//				else visit[i] = 1;
//			}
//		}
//	}
//}
//string check(int **board, int *visit, int N)
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (visit[i] == 1)
//			v1.push_back(i);
//		else if (visit[i] == 2)
//			v2.push_back(i);
//	}
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		for (int j = 0; j < v1.size(); j++)
//		{
//			if (board[v1[i]][v1[j]] == 1)
//				return "No";
//		}
//	}
//	for (int i = 0; i < v2.size(); i++)
//	{
//		for (int j = 0; j < v2.size(); j++)
//		{
//			if (board[v2[i]][v2[j]] == 1)
//				return "No";
//		}
//	}
//	return "Yes";
//}
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int **board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//	}
//	int *visit = new int[N];
//
//	for (int k = 0; k < M; k++)
//	{
//		int i, j;
//		cin >> i >> j;
//		board[i-1][j-1] = 1;
//		board[j-1][i-1] = 1;
//	}
//
//	BFS(board,visit,N);
//
//	cout << check(board, visit, N) << endl;
//
//	return 0;
//}