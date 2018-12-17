//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//int N, M, C;
//
//int Max[2] = { 0, };
//bool **final_visit;
//int x, y;
//
//void combination(int m, int k, int* number, bool *visit, int num)
//{
//	if (k == 1)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			visit[i] = true;
//
//			int sum = 0;
//			int result = 0;
//			for (int j = 0; j < M; j++)
//			{
//				if (visit[j] == true)
//				{
//					sum += number[j];
//					result += pow(number[j], 2);
//				}
//			}
//			if (sum <= C && Max[num] < result)
//			{
//				Max[num] = result;
//				if (num == 0)
//				{
//					for (int l = 0; l < N; l++)
//					{
//						for (int m = 0; m < N; m++)
//						{
//							final_visit[l][m] = false;
//						}
//					}
//					for (int l = y; l < y + M; l++)
//					{
//						final_visit[x][l] = true;
//					}
//				}	
//			}
//
//			visit[i] = false;
//		}
//		return;
//	}
//	else if (m == k)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			visit[i] = true;
//		}
//
//		int sum = 0;
//		int result = 0;
//		for (int i = 0; i < M; i++)
//		{
//			if (visit[i] == true)
//			{
//				sum += number[i];
//				result += pow(number[i], 2);
//			}
//		}
//		if (sum <= C && Max[num] < result)
//		{
//			Max[num] = result;
//			if (num == 0)
//			{
//				for (int l = 0; l < N; l++)
//				{
//					for (int m = 0; m < N; m++)
//					{
//						final_visit[l][m] = false;
//					}
//				}
//				for (int l = y; l < y + M; l++)
//				{
//					final_visit[x][l] = true;
//				}
//			}
//		}
//
//		for (int i = 0; i < m; i++)
//		{
//			visit[i] = false;
//		}
//		return;
//	}
//
//	visit[m - 1] = true;
//	combination(m - 1, k - 1, number, visit, num);
//	visit[m - 1] = false;
//	combination(m - 1, k, number, visit, num);
//}
//
//void choice(int **board, int num)
//{
//	int *number = new int[M];
//	bool *visit = new bool[M];
//	for (int i = 0; i < M; i++)
//	{
//		visit[i] = false;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j <= N - M; j++)
//		{
//			int flag = false;
//			for (int k = j; k < j + M; k++)
//			{
//				if (num == 1 && final_visit[i][k] != false)
//				{
//					flag = true;
//					break;
//				}
//				
//				number[k - j] = board[i][k];
//			}
//			if (flag)
//				continue;
//			for (int k = 1; k <= M; k++)
//			{
//				x = i;
//				y = j;
//				combination(M, k, number, visit, num);
//			}			
//		}
//	}
//	delete[] number;
//	delete[] visit;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	for (int tc = 1; tc <= T; tc++)
//	{
//
//		cin >> N >> M >> C;
//
//		int ** board = new int*[N];
//		final_visit = new bool*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			final_visit[i] = new bool[N];
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//				final_visit[i][j] = false;
//			}
//		}
//
//		choice(board, 0);
//		choice(board, 1);
//	
//		cout << "#" << tc << " " << Max[0] + Max[1] << endl;
//
//		Max[0] = 0;
//		Max[1] = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			delete[] final_visit[i];
//			delete[] board[i];
//		}
//		delete[] final_visit;
//		delete[] board;
//	}
//
//	return 0;
//}