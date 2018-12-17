//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int Min = 100000000;
//int N;
//vector<pair<int, int>> v;
//
//void DFS(int **board, bool **visit, int core)
//{
//	if (core == v.size())
//	{
//		int count = 0;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (visit[i][j] == true)
//					count++;
//			}
//		}
//		if (count < Min)
//			Min = count;
//		return;
//	}
//
//	int x = v[core].first;
//	int y = v[core].second;
//	
//	bool flag1 = true; //╩С
//	bool flag2 = true; //го
//	bool flag3 = true; //аб
//	bool flag4 = true; //©Л
//	
//	for (int i = x - 1; i >= 0; i--) //╩С
//	{
//		if (board[i][y] != 0 || visit[i][y] == true)
//		{
//			flag1 = false;
//			break;
//		}
//	}
//	if (flag1)
//	{
//		for (int i = x - 1; i >= 0; i--)
//		{
//			visit[i][y] = true;
//		}
//		DFS(board, visit, core + 1);
//		for (int i = x - 1; i >= 0; i--)
//		{
//			visit[i][y] = false;
//		}
//	}
//
//	for (int i = x + 1; i < N; i++) // го
//	{
//		if (board[i][y] != 0 || visit[i][y] == true)
//		{
//			flag2 = false;
//			break;
//		}
//	}
//	if(flag2)
//	{
//		for (int i = x + 1; i < N; i++)
//		{
//			visit[i][y] = true;
//		}
//		DFS(board, visit, core + 1);
//		for (int i = x + 1; i < N; i++)
//		{
//			visit[i][y] = false;
//		}
//	}
//
//	for (int i = y - 1; i >= 0; i--) // аб
//	{
//		if (board[x][i] != 0 || visit[x][i] == true)
//		{
//			flag3 = false;
//			break;
//		}
//	}
//	if (flag3)
//	{
//		for (int i = y - 1; i >= 0; i--)
//		{
//			visit[x][i] = true;
//		}
//		DFS(board, visit, core + 1);
//		for (int i = y - 1; i >= 0; i--)
//		{
//			visit[x][i] = false;
//		}
//	}
//
//	for (int i = y + 1; i < N; i++) // ©Л
//	{
//		if (board[x][i] != 0 || visit[x][i] == true)
//		{
//			flag4 = false;
//			break;
//		}
//	}
//	if (flag4)
//	{
//		for (int i = y + 1; i < N; i++)
//		{
//			visit[x][i] = true;
//		}
//		DFS(board, visit, core + 1);
//		for (int i = y + 1; i < N; i++)
//		{
//			visit[x][i] = false;
//		}
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N;
//		
//		int **board = new int*[N];
//		bool **visit = new bool*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			visit[i] = new bool[N];
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//				visit[i][j] = false;
//				if (board[i][j] == 1 && i != 0 && i != N-1 && j != 0 && j != N-1)
//					v.push_back({ i,j });
//			}
//		}
//
//		for (int i = v.size(); i >= 0; i--)
//		{
//			int x = v[i].first;
//			int y = v[i].second;
//
//			bool flag1 = true; //╩С
//			bool flag2 = true; //го
//			bool flag3 = true; //аб
//			bool flag4 = true; //©Л
//
//			for (int i = x - 1; i >= 0; i--) //╩С
//			{
//				if (board[i][y] == 1)
//				{
//					flag1 = false;
//					break;
//				}
//			}
//
//			for (int i = x + 1; i < N; i++) // го
//			{
//				if (board[i][y] == 1)
//				{
//					flag2 = false;
//					break;
//				}
//			}
//			for (int i = y - 1; i >= 0; i--) // аб
//			{
//				if (board[x][i] == 1)
//				{
//					flag3 = false;
//					break;
//				}
//			}
//			for (int i = y + 1; i < N; i++) // ©Л
//			{
//				if (board[x][i] == 1)
//				{
//					flag4 = false;
//					break;
//				}
//			}
//			if (!flag1 && !flag2 && !flag3 && !flag4)
//				v.erase(v.begin() + i);
//		}
//
//		DFS(board, visit, 0);
//
//		if(Min == 100000000)
//			cout << "#" << tc << " 0" << endl;
//		else cout << "#" << tc << " " << Min << endl;
//		
//		Min = 100000000;
//		v.clear();
//
//		for (int i = 0; i < N; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//	return 0;
//}