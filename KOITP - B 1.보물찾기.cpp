//#include <iostream>
//
//using namespace std;
//
//int **board;
//
//int N, M, K;
//int result = 0;
//bool flag = false;
//
//void dfs(int current, int k)
//{
//	if (k < 0)
//		return;
//
//	if (current == N)
//	{
//		flag = true;
//
//		if (result > K - k)
//			result = K - k;
//		return;
//	}
//	if (board[current][N] == 1)
//	{
//		dfs(N, k - 1);
//	}
//	else
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			if (i != current)
//			{
//				if (board[current][i] == 1)
//				{
//					dfs(i, k - 1);
//				}
//			}
//		}
//	}	
//}
//int main()
//{
//	int n;
//
//	cin >> n;
//
//	for (int test = 0; test < n; test++)
//	{
//		cin >> N >> M >> K;
//
//		result = K;
//		
//		board = new int*[N+1];
//		
//		for (int i = 0; i < N+1; i++)
//		{
//			board[i] = new int[N+1];
//			//for (int j = 0; j < N+1; j++)
//			//{
//			//	board[i][j] = 0; //배열 0 초기화
//			//}
//		}
//		
//		for (int i = 0; i < M; i++)
//		{
//			int q, w;
//			cin >> q >> w;
//
//			board[q][w] = 1;
//		}
//		bool pruning1 = false;
//		bool pruning2 = false;
//
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (board[i][N] == 1)
//				pruning1 = true;
//			if (board[1][i] == 1)
//				pruning2 = true;
//		}
//		if(pruning1 && pruning2)
//			dfs(1, K);
//
//		if (flag == true)
//		{
//			cout << "#" << test + 1 << " " << result << endl;
//			flag = false;
//		}
//		else cout << "#" << test + 1 << " " << "-1" << endl;
//
//		
//		for (int i = 0; i < N+1; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//
//	return 0;
//}