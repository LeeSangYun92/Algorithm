//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int n, m, startX, startY, Time;
//
//int BFS(int **board)
//{
//	bool **visit = new bool*[n];
//	for (int i = 0; i < n; i++)
//	{
//		visit[i] = new bool[m];
//		for (int j = 0; j < m; j++)
//		{
//			visit[i][j] = false;
//		}
//	}
//	int count = 0;
//	int current = 0;
//	queue<pair<int, int>> q;
//	
//	q.push(make_pair(startX, startY));
//	visit[startX][startY] = true;
//
//	while (!q.empty())
//	{
//
//		int qSize = q.size();
//		
//		if (current == Time)
//		{
//			return count;
//		}
//		current++;
//		
//		//cout << qSize << endl;
//
//		for (int i = 0; i < qSize; i++)
//		{
//			int x = q.front().first;
//			int y = q.front().second;
//			//cout << x << " " << y << endl;
//			q.pop();
//			count++;
//
//			//각 상하좌우 순서
//			if (board[x][y] == 1)
//			{
//				if (x - 1 >= 0 && (board[x - 1][y] == 1 || board[x - 1][y] == 2 || board[x - 1][y] == 5 || board[x - 1][y] == 6) && visit[x - 1][y] == false)
//				{
//					visit[x - 1][y] = true;
//					q.push(make_pair(x - 1, y));
//				}
//				if (x + 1 < n && (board[x + 1][y] == 1 || board[x + 1][y] == 2 || board[x + 1][y] == 4 || board[x + 1][y] == 7) && visit[x + 1][y] == false)
//				{
//					visit[x + 1][y] = true;
//					q.push(make_pair(x + 1, y));
//				}
//				if (y - 1 >= 0 && (board[x][y - 1] == 1 || board[x][y - 1] == 3 || board[x][y - 1] == 4 || board[x][y - 1] == 5) && visit[x][y - 1] == false)
//				{
//					visit[x][y - 1] = true;
//					q.push(make_pair(x, y - 1));
//				}
//				if (y + 1 < m && (board[x][y + 1] == 1 || board[x][y + 1] == 3 || board[x][y + 1] == 6 || board[x][y + 1] == 7) && visit[x][y + 1] == false)
//				{
//					visit[x][y + 1] = true;
//					q.push(make_pair(x, y + 1));
//				}
//			}
//			else if (board[x][y] == 2)
//			{
//				if (x - 1 >= 0 && (board[x - 1][y] == 1 || board[x - 1][y] == 2 || board[x - 1][y] == 5 || board[x - 1][y] == 6) && visit[x - 1][y] == false)
//				{
//					visit[x - 1][y] = true;
//					q.push(make_pair(x - 1, y));
//				}
//				if (x + 1 < n && (board[x + 1][y] == 1 || board[x + 1][y] == 2 || board[x + 1][y] == 4 || board[x + 1][y] == 7) && visit[x + 1][y] == false)
//				{
//					visit[x + 1][y] = true;
//					q.push(make_pair(x + 1, y));
//				}
//			}
//			else if (board[x][y] == 3)
//			{
//				if (y - 1 >= 0 && (board[x][y - 1] == 1 || board[x][y - 1] == 3 || board[x][y - 1] == 4 || board[x][y - 1] == 5) && visit[x][y - 1] == false)
//				{
//					visit[x][y - 1] = true;
//					q.push(make_pair(x, y - 1));
//				}
//				if (y + 1 < m && (board[x][y + 1] == 1 || board[x][y + 1] == 3 || board[x][y + 1] == 6 || board[x][y + 1] == 7) && visit[x][y + 1] == false)
//				{
//					visit[x][y + 1] = true;
//					q.push(make_pair(x, y + 1));
//				}
//			}
//			else if (board[x][y] == 4)
//			{
//				if (x - 1 >= 0 && (board[x - 1][y] == 1 || board[x - 1][y] == 2 || board[x - 1][y] == 5 || board[x - 1][y] == 6) && visit[x - 1][y] == false)
//				{
//					visit[x - 1][y] = true;
//					q.push(make_pair(x - 1, y));
//				}
//				if (y + 1 < m && (board[x][y + 1] == 1 || board[x][y + 1] == 3 || board[x][y + 1] == 6 || board[x][y + 1] == 7) && visit[x][y + 1] == false)
//				{
//					visit[x][y + 1] = true;
//					q.push(make_pair(x, y + 1));
//				}
//			}
//			else if (board[x][y] == 5)
//			{
//				if (x + 1 < n && (board[x + 1][y] == 1 || board[x + 1][y] == 2 || board[x + 1][y] == 4 || board[x + 1][y] == 7) && visit[x + 1][y] == false)
//				{
//					visit[x + 1][y] = true;
//					q.push(make_pair(x + 1, y));
//				}
//				if (y + 1 < m && (board[x][y + 1] == 1 || board[x][y + 1] == 3 || board[x][y + 1] == 6 || board[x][y + 1] == 7) && visit[x][y + 1] == false)
//				{
//					visit[x][y + 1] = true;
//					q.push(make_pair(x, y + 1));
//				}
//			}
//			else if (board[x][y] == 6)
//			{
//				if (x + 1 < n && (board[x + 1][y] == 1 || board[x + 1][y] == 2 || board[x + 1][y] == 4 || board[x + 1][y] == 7) && visit[x + 1][y] == false)
//				{
//					visit[x + 1][y] = true;
//					q.push(make_pair(x + 1, y));
//				}
//				if (y - 1 >= 0 && (board[x][y - 1] == 1 || board[x][y - 1] == 3 || board[x][y - 1] == 4 || board[x][y - 1] == 5) && visit[x][y - 1] == false)
//				{
//					visit[x][y - 1] = true;
//					q.push(make_pair(x, y - 1));
//				}
//			}
//			else if (board[x][y] == 7)
//			{
//				if (x - 1 >= 0 && (board[x - 1][y] == 1 || board[x - 1][y] == 2 || board[x - 1][y] == 5 || board[x - 1][y] == 6) && visit[x - 1][y] == false)
//				{
//					visit[x - 1][y] = true;
//					q.push(make_pair(x - 1, y));
//				}
//				if (y - 1 >= 0 && (board[x][y - 1] == 1 || board[x][y - 1] == 3 || board[x][y - 1] == 4 || board[x][y - 1] == 5) && visit[x][y - 1] == false)
//				{
//					visit[x][y - 1] = true;
//					q.push(make_pair(x, y - 1));
//				}
//			}	
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> n >> m >> startX >> startY >> Time;
//
//		int **board = new int*[n];
//		for (int i = 0; i < n; i++)
//		{
//			board[i] = new int[m];
//			for (int j = 0; j < m; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		cout << "#" << tc << " " << BFS(board) << endl;
//
//
//		for (int i = 0; i < n; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//	return 0;
//}