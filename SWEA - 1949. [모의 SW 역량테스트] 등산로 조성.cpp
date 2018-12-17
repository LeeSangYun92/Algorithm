//#include <iostream>
//
//using namespace std;
//int N, K;
//int Max = 0;
//int high = 0;
//
//void checking(bool flag[8], int **board, bool **visit, int x, int y)
//{
//	if (x - 1 >= 0 && board[x][y] > board[x - 1][y] && visit[x - 1][y] == false)
//	{
//		flag[0] = true;
//	}
//	else if (x - 1 >= 0 && board[x][y] <= board[x - 1][y] && board[x][y] > board[x - 1][y] - K && visit[x - 1][y] == false)
//	{
//		flag[4] = true;
//	}
//
//	if (x + 1 < N && board[x][y] > board[x + 1][y] && visit[x + 1][y] == false)
//	{
//		flag[1] = true;
//	}
//	else if (x + 1 < N && board[x][y] <= board[x + 1][y] && board[x][y] > board[x + 1][y] - K && visit[x + 1][y] == false)
//	{
//		flag[5] = true;
//	}
//
//	if (y - 1 >= 0 && board[x][y] > board[x][y - 1] && visit[x][y - 1] == false)
//	{
//		flag[2] = true;
//	}
//	else if (y - 1 >= 0 && board[x][y] <= board[x][y - 1] && board[x][y] > board[x][y - 1] - K && visit[x][y - 1] == false)
//	{
//		flag[6] = true;
//	}
//	if (y + 1 < N && board[x][y] > board[x][y + 1] && visit[x][y + 1] == false)
//	{
//		flag[3] = true;
//	}
//	else if (y + 1 < N && board[x][y] <= board[x][y + 1] && board[x][y] > board[x][y + 1] - K && visit[x][y + 1] == false)
//	{
//		flag[7] = true;
//	}
//}
//void DFS(int **board, bool **visit, int x, int y, int wall, int score)
//{
//	/*for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visit[i][j] == true)
//				cout << board[i][j]<<"*";
//			else cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "-----------------------------" << endl;*/
//	bool flag[8] = { false, };
//	checking(flag, board, visit, x, y);
//
//	if ((wall == 1 && flag[0] == false &&
//		flag[1] == false &&
//		flag[2] == false &&
//		flag[3] == false) || 
//		(flag[0] == false && 
//		flag[1] == false && 
//		flag[2] == false && 
//		flag[3] == false && 
//		flag[4] == false && 
//		flag[5] == false && 
//		flag[6] == false && 
//		flag[7] == false))
//	{
//		if (score > Max)
//			Max = score;
//		return;
//	}
//	
//	if (flag[0] == true) // ╩С
//	{
//		visit[x - 1][y] = true;
//		DFS(board, visit, x - 1, y, wall, score + 1);
//		visit[x - 1][y] = false;
//	}
//	else if (flag[4] == true && wall == 0)
//	{
//		int temp = board[x - 1][y];
//
//		visit[x - 1][y] = true;
//		board[x - 1][y] = board[x][y] - 1;
//		DFS(board, visit, x - 1, y, 1, score + 1);
//		board[x - 1][y] = temp;
//		visit[x - 1][y] = false;
//	}
//
//	if (flag[1] == true) // го
//	{
//		visit[x + 1][y] = true;
//		DFS(board, visit, x + 1, y, wall, score + 1);
//		visit[x + 1][y] = false;
//	}
//	else if (flag[5] == true && wall == 0)
//	{
//		int temp = board[x + 1][y];
//
//		visit[x + 1][y] = true;
//		board[x + 1][y] = board[x][y] - 1;
//		DFS(board, visit, x + 1, y, 1, score + 1);
//		board[x + 1][y] = temp;
//		visit[x + 1][y] = false;
//	}
//
//	if (flag[2] == true) // аб
//	{
//		visit[x][y - 1] = true;
//		DFS(board, visit, x, y - 1, wall, score + 1);
//		visit[x][y - 1] = false;
//	}
//	else if (flag[6] == true && wall == 0)
//	{
//		int temp = board[x][y - 1];
//
//		visit[x][y - 1] = true;
//		board[x][y - 1] = board[x][y] - 1 ;
//		DFS(board, visit, x, y - 1, 1, score + 1);
//		board[x][y - 1] = temp;
//		visit[x][y - 1] = false;
//	}
//
//	if (flag[3] == true) // ©Л
//	{
//		visit[x][y + 1] = true;
//		DFS(board, visit, x, y + 1, wall, score + 1);
//		visit[x][y + 1] = false;
//	}
//	else if (flag[7] == true && wall == 0)
//	{
//		int temp = board[x][y + 1];
//
//		visit[x][y + 1] = true;
//		board[x][y + 1] = board[x][y] - 1;
//		DFS(board, visit, x, y + 1, 1, score + 1);
//		board[x][y + 1] = temp;
//		visit[x][y + 1] = false;
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N >> K;
//
//		int **board = new int*[N];
//		bool **visit = new bool*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			visit[i] = new bool[N];
//			for (int j = 0; j < N; j++)
//			{
//				visit[i][j] = false;
//				cin >> board[i][j];
//				if (board[i][j] > high)
//					high = board[i][j];
//			}
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (board[i][j] == high)
//				{
//					visit[i][j] = true;
//					DFS(board, visit, i, j, 0, 1);
//					visit[i][j] = false;
//				}
//			}
//		}
//		cout << "#" << tc << " " << Max << endl;
//		Max = 0;
//		high = 0;
//		for (int i = 0; i < N; i++)
//		{
//			delete[] visit[i];
//			delete[] board[i];
//		}
//		delete[] visit;
//		delete[] board;
//	}
//
//	return 0;
//}