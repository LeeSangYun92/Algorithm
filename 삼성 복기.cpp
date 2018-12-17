//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int N, L, R;
//int **visit;
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//bool BFS(int **board)
//{
//	bool flag = false;
//	queue<pair<int, int> > q;
//	int m = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visit[i][j] == false)
//			{
//				m++;
//				q.push({ i,j });
//				visit[i][j] = true;
//
//				int sum = 0;
//				int num = 0;
//				while (!q.empty())
//				{
//					int x = q.front().first;
//					int y = q.front().second;
//					q.pop();
//					sum += board[x][y];
//					num++;
//					
//					for (int i = 0; i < 4; i++)
//					{
//						int newX = x + dx[i];
//						int newY = y + dy[i];
//
//						int differ;
//
//						if (newX >= 0 && newX < N && newY >= 0 && newY < N)
//						{
//							differ = abs(board[x][y] - board[newX][newY]);
//						}
//						else continue;
//
//						if (differ >= L && differ <= R && visit[newX][newY] == -1)
//						{
//							visit[newX][newY] = m;
//							q.push({ newX,newY });
//
//							flag = true;
//						}
//					}
//				}
//				int avg = sum / num;
//
//			}
//		}
//	}
//	return flag;
//}
//int main(void)
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N >> L >> R;
//
//		int **board = new int*[N];
//		visit = new int*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			visit[i] = new int[N];
//
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//				visit[i][j] = -1;
//			}
//		}
//
//		int result = 0;
//		while (true)
//		{
//			if (BFS(board))
//			{
//				result++;
//
//				for (int i = 0; i < N; i++)
//				{
//					memset(visit, false, sizeof(bool)*N);
//				}
//			}
//			else break;
//		}
//		cout << "#" << tc << " " << result << endl;
//
//		for (int i = 0; i < N; i++)
//		{
//			delete[] board[i];
//			delete[] visit[i];
//		}
//		delete[] board;
//		delete[] visit;
//	}
//	return 0;
//}

//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//int N, L, R;
//bool **visit;
//bool **marking;
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//bool BFS(int **board)
//{
//	bool flag = false;
//	queue<pair<int, int> > q;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visit[i][j] == false)
//			{
//				q.push({ i,j });
//				visit[i][j] = true;
//
//				int sum = 0;
//				int num = 0;
//				while (!q.empty())
//				{
//					int x = q.front().first;
//					int y = q.front().second;
//					q.pop();
//					sum += board[x][y];
//					num++;
//					marking[x][y] = true;
//
//					for (int i = 0; i < 4; i++)
//					{
//						int newX = x + dx[i];
//						int newY = y + dy[i];
//
//						int differ;
//
//						if (newX >= 0 && newX < N && newY >= 0 && newY < N)
//						{
//							differ = abs(board[x][y] - board[newX][newY]);
//						}
//						else continue;
//
//						if (differ >= L && differ <= R && visit[newX][newY] == false)
//						{
//							visit[newX][newY] = true;
//							q.push({ newX,newY });
//
//							flag = true;
//						}
//					}
//				}
//				int avg = sum / num;
//
//				for (int i = 0; i < N; i++)
//				{
//					for (int j = 0; j < N; j++)
//					{
//						if (marking[i][j] == true)
//						{
//							board[i][j] = avg;
//						}
//					}
//				}
//
//				for (int i = 0; i < N; i++)
//				{
//					memset(marking[i], false, sizeof(bool) *N);
//				}
//			}
//		}
//	}
//	return flag;
//}
//int main(void)
//{
//	cin >> N >> L >> R;
//
//	int **board = new int*[N];
//	visit = new bool*[N];
//	marking = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//		visit[i] = new bool[N];
//		marking[i] = new bool[N];
//
//		for (int j = 0; j < N; j++)
//		{
//			cin >> board[i][j];
//			visit[i][j] = false;
//			marking[i][j] = false;
//		}
//	}
//
//	int result = 0;
//	while (true)
//	{
//		if (BFS(board))
//		{
//			result++;
//
//			for (int i = 0; i < N; i++)
//			{
//				memset(visit[i], false, sizeof(bool)*N);
//			}
//		}
//		else break;
//	}
//	cout << result << endl;
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] board[i];
//		delete[] visit[i];
//		delete[] marking[i];
//	}
//	delete[] board;
//	delete[] visit;
//	delete[] marking;
//
//	return 0;
//}