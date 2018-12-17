//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int N, M;
//int r, c, direction;
//
//int main()
//{
//	cin >> N >> M;
//	cin >> r >> c >> direction;
//	int **board = new int*[N];
//	bool **visit = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[M];
//		visit[i] = new bool[M];
//		for (int j = 0; j < M; j++)
//		{
//			cin >> board[i][j];
//			visit[i][j] = false;
//		}
//	}
//	int count = 1;
//	int dx[4] = { -1, 0, 1, 0 };
//	int dy[4] = { 0, 1, 0, -1 };
//	int dVisit[4] = { 0, };
//	visit[r][c] = true;
//
//	while (true)
//	{
//		if (board[r][c] == 1)
//			break;
//
//		bool flag = true;
//
//		int newDirection = (direction + 3) % 4;
//		int newR = r + dx[newDirection];
//		int newC = c + dy[newDirection];
//
//		if (newR >= 0 && newR < N && newC >= 0 && newC < M &&
//			board[newR][newC] == 0 && visit[newR][newC] == false)
//		{
//			count++;
//			visit[newR][newC] = true;
//
//			r = newR;
//			c = newC;
//			direction = newDirection;
//			
//			flag = false;
//			memset(dVisit, 0, sizeof(dVisit));
//		}
//		else {
//			if (dVisit[newDirection] == 0)
//			{
//				dVisit[newDirection] = 1;
//				direction = newDirection;
//				continue;
//			}
//		}
//
//		if (flag)
//		{
//			int backDirection = (direction + 2) % 4;
//			int backR = r + dx[backDirection];
//			int backC = c + dy[backDirection];
//
//			if (backR >= 0 && backR < N && backC >= 0 && backC < M)
//			{
//				r = backR;
//				c = backC;
//				memset(dVisit, 0, sizeof(dVisit));
//			}
//			else break;
//		}
//	}
//
//	cout << count << endl;
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] board[i];
//		delete[] visit[i];
//	}
//	delete[] board;
//	delete[] visit;
//
//	return 0;
//}
