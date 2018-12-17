//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//bool flag = false;
//
//bool isMagicStar(int board[][9])
//{
//	int sum1 = board[0][4] + board[1][3] + board[2][2] + board[3][1];
//	int sum2 = board[0][4] + board[1][5] + board[2][6] + board[3][7];
//	int sum3 = board[1][1] + board[1][3] + board[1][5] + board[1][7];
//	int sum4 = board[1][1] + board[2][2] + board[3][3] + board[4][4];
//	int sum5 = board[1][7] + board[2][6] + board[3][5] + board[4][4];
//	int sum6 = board[3][1] + board[3][3] + board[3][5] + board[3][7];
//
//	if (sum1 != 26 || sum2 != 26 || sum3 != 26 || sum4 != 26 || sum5 != 26 || sum6 != 26)
//		return false;
//	else return true;
//}
//void DFS(int board[][9], bool visited[], int current)
//{
//	if (flag == true)
//		return;
//		
//	if (current == 0)
//	{
//		if (isMagicStar(board))
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 9; j++)
//				{
//					if (board[i][j] == 0)
//						cout << ".";
//					else cout << (char)(board[i][j] + 64);
//				}
//				cout << endl;
//			}
//			flag = true;
//		}
//		/*else 
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 9; j++)
//				{
//					cout << board[i][j] << " ";
//				}
//				cout << endl;
//			}
//		cout << endl;*/
//		return;
//	}
//
//	for (int i = 0; i < 5; i++) 
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (i > 1)
//			{
//				if (board[1][1] + board[1][3] + board[1][5] + board[1][7] != 26)
//					return;
//			}
//			if (i > 2 && j > 1)
//			{
//				if (board[0][4] + board[1][3] + board[2][2] + board[3][1] != 26)
//					return;
//			}
//			if (i > 3)
//			{
//				if (board[3][1] + board[3][3] + board[3][5] + board[3][7] != 26)
//					return;
//				if (board[0][4] + board[1][5] + board[2][6] + board[3][7] != 26)
//					return;	
//			}
//			if (board[i][j] == -1)
//			{
//				for (int k = 1; k < 13; k++)
//				{
//					if (visited[k] == false)
//					{
//						board[i][j] = k;
//						visited[k] = true;
//
//						DFS(board, visited, current - 1);
//						
//						board[i][j] = -1;
//						visited[k] = false;
//					}
//				}
//
//			}
//		}
//	}
//}
//int main()
//{
//	char cboard[5][9];
//	int board[5][9];
//	bool visited[13];
//	int count = 0;
//	for (int i = 0; i < 13; i++)
//	{
//		visited[i] = false;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cin >> cboard[i][j];
//			if (cboard[i][j] == '.')
//				board[i][j] = 0;
//			else if (cboard[i][j] == 'x')
//			{
//				board[i][j] = -1;
//				count++;
//			}		
//			else
//			{
//				board[i][j] = cboard[i][j] - 64;
//				visited[board[i][j]] = true;
//			}
//		}
//	}
//
//	DFS(board, visited, count);
//
//	return 0;
//}