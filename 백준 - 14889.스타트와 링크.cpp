//#include <iostream>
//
//using namespace std;
//
//int N;
//int Min = 1000000000;
//
//int **board;
//
//void combination(bool *visit, int n, int r)
//{
//	if (r == 1)
//	{
//		for(int i = 0 ; i< n; i++)
//		{ 
//			visit[i] = true;
//
//			int score1 = 0;
//			int score2 = 0;
//
//			for (int j = 0; j < N; j++)
//			{
//
//				if (visit[j] == true)
//				{
//					for (int k = 0; k < N; k++)
//					{
//						if (j == k)
//							continue;
//						if (visit[k] == true)
//						{
//							score1 += board[j][k];
//						}
//					}
//				}
//				if (visit[j] == false)
//				{
//					for (int k = 0; k < N; k++)
//					{
//						if (j == k)
//							continue;
//						if (visit[k] == false)
//						{
//							score2 += board[j][k];
//						}
//					}
//				}
//			}
//			visit[i] = false;
//	
//			if (abs(score1 - score2) < Min)
//				Min = abs(score1 - score2);
//		}
//		return;
//	}
//	else if (n == r)
//	{
//		int score1 = 0;
//		int score2 = 0;
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = true;
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			if (visit[i] == true)
//			{
//				for (int j = 0; j < N; j++)
//				{
//					if (i == j)
//						continue;
//					if (visit[j] == true)
//					{
//						score1 += board[i][j];
//					}
//				}
//			}
//			if (visit[i] == false)
//			{
//				for (int j = 0; j < N; j++)
//				{
//					if (i == j)
//						continue;
//					if (visit[j] == false)
//					{
//						score2 += board[i][j];
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = false;
//		}
//			
//		if (abs(score1 - score2) < Min)
//			Min = abs(score1 - score2);
//
//		return;
//	}
//
//	visit[n - 1] = true;
//	combination(visit, n - 1, r - 1);
//	visit[n - 1] = false;
//	combination(visit, n - 1, r);
//}
//int main()
//{
//	cin >> N;
//	board = new int*[N];
//	bool *visit = new bool[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//		visit[i] = false;
//		for (int j = 0; j < N; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	combination(visit, N, N/2);
//
//	cout << Min << endl;
//
//	return 0;
//}