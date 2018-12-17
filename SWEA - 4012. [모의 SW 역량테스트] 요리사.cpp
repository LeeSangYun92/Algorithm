//#include <iostream>
//
//using namespace std;
//
//int Min = 100000000;
//
//void combination(int **board, bool *visit, int n, int r, int N, int R)
//{
//	if (n == r)
//	{
//		int A = 0;
//		int B = 0;
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = true;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (visit[i] == true)
//			{
//				for (int j = i + 1; j < N; j++)
//				{
//					if (visit[j] == true)
//					{
//						A += board[i][j];
//					}
//				}
//			}
//			else if (visit[i] == false)
//			{
//				for (int j = i + 1; j < N; j++)
//				{
//					if (visit[j] == false)
//					{
//						B += board[i][j];
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = false;
//		}
//		if( Min > abs(A - B))
//			Min = abs(A - B);
//
//		return;
//	}
//	else if (r == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int A = 0;
//			int B = 0;
//			visit[i] = true;
//
//			for (int i = 0; i < N; i++)
//			{
//				if (visit[i] == true)
//				{
//					for (int j = i + 1; j < N; j++)
//					{
//						if (visit[j] == true)
//						{
//							A += board[i][j];
//						}
//					}
//				}
//				else if (visit[i] == false)
//				{
//					for (int j = i + 1; j < N; j++)
//					{
//						if (visit[j] == false)
//						{
//							B += board[i][j];
//						}
//					}
//				}
//			}
//
//			visit[i] = false;
//
//			if (Min > abs(A - B))
//				Min = abs(A - B);
//		}
//
//		return;
//	}
//
//	visit[n - 1] = true;
//	combination(board, visit, n - 1, r - 1, N, R);
//	visit[n - 1] = false;
//	combination(board, visit, n - 1, r, N, R);
//
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		int n;
//		cin >> n;
//
//
//		int **board = new int*[n];
//		bool *visit = new bool[n];
//		for (int i = 0; i < n; i++)
//		{
//			board[i] = new int[n];
//			visit[i] = false;
//			for (int j = 0; j < n; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				board[i][j] = board[i][j] + board[j][i]; //미리 시너지의 합 합쳐놓기
//			}
//		}
//		
//		
//		int r = n / 2;
//		combination(board, visit, n, r, n, r);
//
//		cout << "#" << tc << " " << Min << endl;
//		Min = 100000000;
//		for (int i = 0; i < n; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//	return 0;
//
//}