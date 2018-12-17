//#include <iostream>
//
//using namespace std;
//
//int n;
//int firstX;
//int firstY;
//int flag;
//int dx[4] = { 1,-1,-1,1 }; //오른쪽위, 왼쪽아래, 왼쪽위, 오른쪽아래 순서
//int dy[4] = { -1,1,-1,1 };
//int Max = 0;
//
//void DFS(int **board, bool visit[101], bool direction[4], int x, int y, int count, int ld)
//{
//	if (flag && x == firstX && y == firstY)
//	{
//		if (count > 3 && count > Max)
//			Max = count;
//		return;
//	}
//	else flag = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (ld != i && (ld == 0 || ld == 1) && (i == 0 || i == 1))
//			continue;
//		if (ld != i && (ld == 2 || ld == 3) && (i == 2 || i == 3))
//			continue;
//
//		int newX = x + dx[i];
//		int newY = y + dy[i];
//		
//		bool flag = false;
//
//		if (newX >= 0 && newX < n && newY >= 0 && newY < n &&
//			visit[board[newX][newY]] == false && (direction[i] == false || ld == i))
//		{
//			direction[i] = true;
//			visit[board[newX][newY]] = true;
//			DFS(board, visit, direction, newX, newY, count +1, i);
//			visit[board[newX][newY]] = false;
//			direction[i] = false;
//		}
//	}
//
//}
//int main()
//{
//	int T; 
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> n;
//
//		bool visit[101] = { false, };
//		bool direction[4] = { false, };
//
//		int **board = new int*[n];
//		for (int i = 0; i < n; i++)
//		{
//			board[i] = new int[n];
//			for (int j = 0; j < n; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				firstX = i;
//				firstY = j;
//				flag = false;
//				DFS(board, visit, direction, i, j, 0, 0);
//			}
//		}
//		if( Max == 0)
//			cout << "#" << tc << " -1"<< endl;
//		else
//			cout << "#" << tc << " " << Max << endl;
//
//		Max = 0;
//		for (int i = 0; i < n; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//	return 0;
//}