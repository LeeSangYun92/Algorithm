//#include <iostream>
//#include <queue>
//
//using namespace std;
//void DFS(int **board, bool *visit, int N, int current)
//{
//	visit[current] = true;
//	char alpa = current + 65;
//	cout << alpa;
//
//	
//	for (int i = 0; i < N; i++)
//	{
//		if (i == current)
//			continue;
//		if(visit[i] == false && board[current][i] == 1)
//		{ 
//			DFS(board, visit, N, i);
//		}
//	}
//}
//void BFS(int **board, bool *visit, int N, int current)
//{
//	queue<int> q;
//	q.push(current);
//	visit[current] = true;
//
//	while (!q.empty())
//	{
//		int node = q.front();
//		q.pop();
//		char alpa = node + 65;
//		cout << alpa;
//		for (int i = 0; i < N; i++)
//		{
//			if (visit[i] == false && board[node][i] == 1)
//			{
//				q.push(i);
//				visit[i] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int N, E;
//	cin >> N >> E;
//	int **board = new int*[N];
//	bool *visit = new bool[N];
//	for (int i = 0; i < N;i++)
//	{
//		board[i] = new int[N];
//		for (int j = 0; j < N; j++)
//		{
//			board[i][j] = 0;
//			visit[j] = false;
//		}
//	}
//	for (int j = 0; j < E; j++)
//	{
//		char x;
//		char y;
//		cin >> x >> y;
//		board[x - 65][y - 65] = 1;
//		board[y - 65][x - 65] = 1;
//		/*cout << x - 65 << " " << y - 65 << endl;*/
//	}
//	char start;
//	cin >> start;
//	int sPoint = start - 65;
//
//	DFS(board, visit, N, sPoint);
//	cout << endl;
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = false;
//	}
//	BFS(board, visit, N, sPoint);
//	cout << endl;
//	return 0;
//}