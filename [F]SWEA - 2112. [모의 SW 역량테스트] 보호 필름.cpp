//#include <iostream>
//
//using namespace std;
//
//int N, M, K;
//int Num = 100000000;
//
//bool check(int **board)
//{
//	for (int i = 0; i < M; i++)
//	{
//		int count = 1;
//		bool flag = true;
//		int Max = 0;
//		for (int j = 0; j < N - 1; j++)
//		{
//			if (board[j][i] == board[j + 1][i])
//				count++;
//			else {
//				count = 1;
//			}
//
//			if (count >= K)
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag)
//			return false;
//	}
//	return true;
//}
//void DFS(int**board, bool*visit, int depth)
//{
//	if (check(board))
//	{
//		if(Num > depth)
//			Num = depth;
//		return;
//	}
//
//	int *temp = new int[M];
//	for (int i = 0; i < N; i++)
//	{
//		if (visit[i] == true)
//			continue;
//
//		for (int j = 0; j < M; j++)
//		{
//			temp[j] = board[i][j];
//		}
//
//		visit[i] = true;
//
//		for (int j = 0; j < M; j++)
//		{
//			board[i][j] = 0;
//		}
//		DFS(board, visit, depth + 1);
//
//		for (int j = 0; j < M; j++)
//		{
//			board[i][j] = 1;
//		}
//		DFS(board, visit, depth + 1);
//		visit[i] = false;
//		for (int j = 0; j < M; j++)
//		{
//			board[i][j] = temp[j];
//		}
//	}
//	delete[] temp;
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N >> M >> K;
//
//		if (K == 1)
//		{
//			cout << "#" << tc << " 0" << endl;
//			continue;
//		}
//
//		int **board = new int*[N];
//		bool *visit = new bool[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[M];
//			visit[i] = false;
//			for (int j = 0; j < M; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		DFS(board, visit, 0);
//		cout << "#" << tc << " " << Num << endl;
//
//		Num = 100000000;
//
//		for (int i = 0; i< N; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//		delete[] visit;
//	}
//
//	return 0;
//}