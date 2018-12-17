//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//void BFS(int **board,int N)
//{
//	int *visit = new int[N];
//	queue<int> q;
//	
//	q.push(0);
//	visit[0] = 1;
//
//	while (!q.empty())
//	{
//		int node = q.front();
//		q.pop();
//		
//		cout << node << " ";
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
//	cout << endl;
//}
//void DFS(int **board,int* visit,int N,int current)
//{
//	cout << current << " ";
//	visit[current] = 1;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (board[current][i] == 1 && visit[i] != 1)
//		{
//			DFS(board, visit, N, i);
//		}
//	}
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
//		for (int j = 0; j < N; j++)
//		{
//			board[i][j] = 0;
//		}
//	}
//
//	for (int k = 0; k < M; k++)
//	{
//		int i, j;
//		cin >> i >> j;
//		board[i][j] = 1;
//		board[j][i] = 1;
//	}
//	int *visit = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = 0;
//	}
//	DFS(board,visit, N,0);
//
//	cout << endl;
//	BFS(board, N);
//
//	return 0;
//}