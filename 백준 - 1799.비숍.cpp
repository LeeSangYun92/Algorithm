//#include <iostream>
//
//using namespace std;
//
//int maxValue = 0;
//int *visit1;
//int *visit2;
//
//void DFS(int **board, int x, int y, int n)
//{
//	if (x >= n)
//	{
//		y++;
//		if (x % 2 == 0)
//			x = 1;
//		else x = 0;
//	}
//
//	if (y >= n)
//	{
//		int c = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (board[i][j] == 2)
//					c++;
//			}
//		}
//		if (c > maxValue)
//			maxValue = c;
//		return;
//	}
//
//	if (board[x][y] == 1 && visit1[x + y] == false && visit2[n + (y - x)] == false)
//	{
//		board[x][y] = 2;
//		visit1[x + y] = true;
//		visit2[n + (y - x)] = true;
//
//		DFS(board, x + 2, y, n);
//		
//		board[x][y] = 1;
//		visit1[x + y] = false;
//		visit2[n + (y - x)] = false;
//	}
//	DFS(board, x + 2, y, n);
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	int **board = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		board[i] = new int[n];
//
//		for (int j = 0; j < n; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	visit1 = new int[2 * n];
//	visit2 = new int[2 * n];
//	for (int i = 0; i < 2 * n; i++)
//	{
//		visit1[i] = false;
//		visit2[i] = false;
//	}
//	
//	int result = 0;
//	DFS(board, 0, 0, n);
//	result = maxValue;
//	maxValue = 0;
//	
//	DFS(board, 1, 0, n);
//	result += maxValue;
//
//	cout << result << endl;
//
//	return 0;
//}





//½Ã°£ÃÊ°ú ¶ä
//#include <iostream>
//
//using namespace std;
//
//int maxValue = 0;
//
//bool isPossible(int **board, int x, int y, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		if (x - i >= 0 && y - i >= 0 && board[x - i][y - i] == 2)
//		{
//			return false;
//		}
//		if (x + i < n && y + i < n && board[x + i][y + i] == 2)
//		{
//			return false;
//		}
//		if (x - i >= 0 && y + i < n && board[x - i][y + i] == 2)
//		{
//			return false;
//		}
//		if (x + i < n && y - i >= 0 && board[x + i][y - i] == 2)
//		{
//			return false;
//		}
//	}
//	
//	return true;
//}
//void DFS(int **board, bool **marking, int n)
//{
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cout << board[i][j] << " ";
//
//	//	}
//	//	cout << endl;
//	//}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (board[i][j] == 1 && marking[i][j] == false)
//			{
//				
//				if (isPossible(board, i, j, n))
//				{
//					marking[i][j] = true;
//					board[i][j] = 2;
//					int c = 0;
//					for (int i = 0; i < n; i++)
//					{
//						for (int j = 0; j < n; j++)
//						{
//							if (board[i][j] == 2)
//								c++;
//						}
//					}
//					if (c > maxValue)
//						maxValue = c;
//
//					DFS(board, marking, n);
//
//					marking[i][j] = false;
//					board[i][j] = 1;
//				}
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int count = 0;
//
//	int **board = new int*[n];
//	bool **marking = new bool*[n];
//	for (int i = 0 ; i < n; i++)
//	{
//		board[i] = new int[n];
//		marking[i] = new bool[n];
//		for (int j = 0; j < n; j++)
//		{
//			cin >> board[i][j];
//			marking[i][j] = false;
//
//			if (board[i][j] == 1)
//				count++;
//		}
//	}
//
//	DFS(board, marking, n);
//
//	cout << maxValue << endl;
//
//	return 0;
//}
