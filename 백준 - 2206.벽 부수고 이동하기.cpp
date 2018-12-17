//#include <iostream>
//#include <queue>
//using namespace std;
//
//int **distance1;
//int **distance2;
//int n, m;
//
//int BFS(int **board, int **distance, int startX, int startY, int finishX, int finishY)
//{
//	bool **visit = new bool*[n];
//	for (int i = 0; i < n; i++)
//	{
//		visit[i] = new bool[m];
//		for (int j = 0; j < m; j++)
//		{
//			visit[i][j] = false; //방문하면 true로 변경
//		}
//	}
//
//	int count = 0;
//	int result = 100000000;
//	int X[4] = { 0,0,1,-1 };
//	int Y[4] = { 1,-1,0,0 };
//
//	queue<pair<int, int> > q;
//
//	q.push(make_pair(startX, startY));
//	visit[startX][startY] = true;
//
//	while (!q.empty())
//	{
//		int qSize = q.size();
//		
//		count++;
//		for (int i = 0; i < qSize; i++)
//		{
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//
//			if (x == finishX && y == finishY)
//			{
//				result = count;
//				return result;
//			}
//
//			for (int j = 0; j < 4; j++)
//			{
//				int nextX = x + X[j];
//				int nextY = y + Y[j];
//
//				if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < m &&
//					board[nextX][nextY] == 0 && visit[nextX][nextY] == false) // 길인 경우
//				{
//					q.push(make_pair(nextX, nextY));
//					visit[nextX][nextY] = true;
//				}
//				else if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < m && 
//					board[nextX][nextY] == 1 && visit[nextX][nextY] == false) // 벽인 경우
//				{
//					distance[nextX][nextY] += count;
//					visit[nextX][nextY] = true;
//				}
//			}
//		}		
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		delete[] visit[i];
//	}
//	delete[] visit;
//
//	return result;
//}
//int main()
//{
//	cin >> n >> m;
//	char **cBoard = new char*[n];
//	int **board = new int*[n];
//	distance1 = new int*[n]; // 출발점에서 벽까지의 거리 저장
//	distance2 = new int*[n]; // 도착점에서 벽까지의 거리 저장
//	for (int i = 0; i < n; i++)
//	{
//		cBoard[i] = new char[m];
//		board[i] = new int[m];
//		distance1[i] = new int[m];
//		distance2[i] = new int[m];
//
//		for (int j = 0; j < m; j++)
//		{
//			cin >> cBoard[i][j];
//			board[i][j] = cBoard[i][j] - '0';
//			distance1[i][j] = 0; 
//			distance2[i][j] = 0;
//		}
//	}
//	
//	int min = BFS(board, distance1, 0, 0, n - 1, m - 1);
//	BFS(board, distance2, n - 1, m - 1, 0, 0);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int dis = distance1[i][j] + distance2[i][j] + 1;
//			if (distance1[i][j] != 0 && distance2[i][j] != 0 && min > dis)
//				min = dis;
//		}
//	}
//	if (min == 100000000)
//		cout << "-1" << endl;
//	else
//		cout << min << endl;
//	return 0;
//}