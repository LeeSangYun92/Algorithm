//#include <iostream>
//
//using namespace std;
//
//int possible(int *road, int N, int X)
//{
//	bool *visit = new bool[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = false;
//	}
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		if (i + 1 < N && road[i] < road[i + 1])
//		{
//			if (road[i + 1] - road[i] > 1)
//				return 0;
//			else
//			{
//				int value = road[i];
//				if (visit[i] != false)
//					return 0;
//				else
//					visit[i] = true;
//				
//				if (i - X + 1 < 0)
//					return 0;
//				for (int j = i - 1; j > i - X; j--)
//				{
//					if (value != road[j] || visit[j] != false)
//						return 0;
//					else visit[j] = true;
//				}
//			}
//		}
//		if (i + 1 < N && road[i] > road[i + 1])
//		{
//			if (road[i] - road[i + 1] > 1)
//				return 0;
//			else
//			{
//				int value = road[i + 1];
//				if (visit[i + 1] != false)
//					return 0;
//				else 
//					visit[i + 1] = true;
//				
//				if (i + X >= N)
//					return 0;
//				for (int j = i + 2; j <= i + X; j++)
//				{
//					if (value != road[j] || visit[j] != false)
//						return 0;
//					else visit[j] = true;
//				}
//			}
//		}
//	}
//
//	delete[] visit;
//	return 1;
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		int N, X;
//		cin >> N >> X;
//		int **board = new int*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//		
//		int result = 0;
//		int *temp1 = new int[N]; //가로
//		int *temp2 = new int[N]; //세로
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				temp1[j] = board[i][j]; //가로줄 복사
//				temp2[j] = board[j][i]; //세로줄 복사
//			}
//			result += possible(temp1, N, X);
//			result += possible(temp2, N, X);
//		}
//		delete[] temp1;
//		delete[] temp2;
//
//		cout << "#" << tc << " " << result << endl;
//		for (int i = 0; i < N; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//	return 0;
//}