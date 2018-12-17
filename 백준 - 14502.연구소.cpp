//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int N, M;
//int **board;
//int Max = 0;
//
//vector<pair<int, int>> v;
//
//void BFS()
//{
//	queue<pair<int, int>> q;
//	bool **visit = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = new bool[M];
//		for (int j = 0; j < M; j++)
//		{
//			visit[i][j] = false;
//		}
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		q.push(make_pair(v[i].first, v[i].second));
//	}
//
//	int dx[4] = { 0,0,1,-1 };
//	int dy[4] = { 1,-1,0,0 };
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int newX = x + dx[i];
//			int newY = y + dy[i];
//
//			if (newX >= 0 && newX < N &&newY >= 0 && newY < M &&
//				board[newX][newY] == 0 && visit[newX][newY] == false)
//			{
//				visit[newX][newY] = true;
//				q.push(make_pair(newX, newY));
//			}	
//		}
//	}
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (board[i][j] == 0 && visit[i][j] == false)
//				count++;
//		}
//	}
//	if (count > Max)
//		Max = count;
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] visit[i];
//	}
//	delete[] visit;
//}
//void DFS(int n)
//{
//	if (n == 3)
//	{
//		BFS();
//		return;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (board[i][j] == 0)
//			{
//				board[i][j] = 1;
//				DFS(n + 1);
//				board[i][j] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> N >> M;
//
//	board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[M];
//		for (int j = 0; j < M; j++)
//		{
//			cin >> board[i][j];
//			if (board[i][j] == 2)
//				v.push_back(make_pair(i, j));
//		}
//	}
//	DFS(0);
//	
//	cout << Max << endl;
//
//	return 0;
//}