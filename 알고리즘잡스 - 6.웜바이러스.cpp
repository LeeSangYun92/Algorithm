//#include <iostream>
//#include <queue>
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
//		int node = q.front();
//		q.pop();
//
//		for (int i = 0; i < N; i++)
//		{
//			if (board[node][i] == 1 && visit[i] != 1)
//			{
//				visit[i] = 1;
//				q.push(i);
//			}
//		}
//	}
//}
//int check(int *visit, int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (visit[i] == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	int **board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//	}
//
//	for (int k = 0; k < M; k++)
//	{
//		int i, j;
//		cin >> i >> j;
//		board[i - 1][j - 1] = 1;
//		board[j - 1][i - 1] = 1;
//	}
//
//	int *visit = new int[N];
//	BFS(board, visit, N);
//	cout << check(visit,N )-1 << endl;
//	return 0;
//}