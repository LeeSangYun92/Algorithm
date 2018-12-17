//#include <iostream>
//#include <queue>
//#include <cmath>
//
//using namespace std;
//
//int Max = 0;
//int N, M;
//
//void BFS(int **board, int firstX, int firstY)
//{
//	queue<pair<int, int>> q;
//
//	bool **visit = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = new bool[N];
//		for (int j = 0; j < N; j++)
//		{
//			visit[i][j] = false;
//		}
//	}
//
//	q.push({ firstX,firstY });
//	visit[firstX][firstY] = true;
//
//	int count = 0;
//	int dx[4] = { 0,0, 1, -1 };
//	int dy[4] = { 1, -1, 0, 0 };
//	int k = 2;
//	if (board[firstX][firstY] == 1 && M >= 1)
//	{
//		count++;
//	}
//	if (Max < count)
//		Max = count;
//	while (!q.empty())
//	{
//		int qSize = q.size();
//		
//		for (int i = 0; i < qSize; i++)
//		{
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//
//			for (int i = 0; i < 4; i++)
//			{
//				int newX = x + dx[i];
//				int newY = y + dy[i];
//				
//				if (newX >= 0 && newX < N && newY >= 0 && newY < N 
//					&& visit[newX][newY] == false)
//				{
//					visit[newX][newY] = true;
//					q.push({ newX, newY });
//					if (board[newX][newY] == 1)
//						count++;
//				}
//			
//			}
//		}
//		int profit = M * count - (pow(k, 2) + pow(k - 1, 2));
//		if (profit >= 0 && Max < count)
//			Max = count;
//		k++;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		delete[] visit[i];
//	}
//	delete[] visit;
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N >> M;
//
//		int **board = new int*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				BFS(board, i, j);
//			}
//		}
//	
//		cout << "#" << tc << " " << Max << endl;
//
//		Max = 0;
//		
//		for (int i = 0; i < N; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//
//
//	return 0;
//}