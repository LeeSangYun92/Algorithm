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
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (board[i][j] == 1 && visit[i] == visit[j])
//				return "NO";
//		}
//	}
//	return "YES";
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
//		board[i][j] = 1;
//		board[j][i] = 1;
//	}
//
//	BFS(board,visit,N);
//
//	cout << check(board, visit, N) << endl;
//
//	return 0;
//}