//#include <iostream>
//#include <queue>
//
//using namespace std; 
//int N, M;
//
//int BFS(int **board, bool **visit)
//{
//	/*for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cout << board[i][j] << " ";
//
//		}
//		cout << endl;
//	}*/
//	queue<pair<char, char> > q;
//	q.push(make_pair(0, 0));
//	visit[0][0] = true;
//
//	int count = 0;
//	int X[4] = { 0,  0, 1, -1 };
//	int Y[4] = { 1, -1, 0,  0 };
//	while (!q.empty())
//	{
//		count++;
//		int qSize = q.size();
//
//		for (int i = 0; i < qSize; i++)
//		{
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//
//			if (x == N - 1 && y == M - 1)
//			{
//				return count;
//			}
//			for (int j = 0; j < 4; j++)
//			{
//				int newX = x + X[j];
//				int newY = y + Y[j];
//
//				if (newX >= 0 && newX < N && newY >= 0 && newY < M && board[newX][newY] == 1 && visit[newX][newY] == false)
//				{
//					q.push(make_pair(newX, newY));
//					visit[newX][newY] = true;
//				}
//			}
//		}		
//	}
//	return -1;
//}
//int main()
//{
//	cin >> N >> M;
//
//	char **cBoard = new char*[N];
//	int **board = new int*[N];
//	bool **visit = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		cBoard[i] = new char[M];
//		board[i] = new int[M];
//		visit[i] = new bool[M];
//		for (int j = 0; j < M; j++)
//		{
//			cin >> cBoard[i][j];
//			board[i][j] = cBoard[i][j] - '0';
//			visit[i][j] = false;
//		}
//	}
//
//	cout << BFS(board, visit) << endl;
//
//	return 0;
//}