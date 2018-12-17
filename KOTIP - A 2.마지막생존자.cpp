//#include <iostream>
//
//using namespace std;
//bool check(bool flag, bool one, bool two, bool three) 
//{
//	if (flag == true && one == true && two == true && three == true)
//		return true;
//	else return false;
//}
//int main()
//{
//	int n;
//	int size;
//
//	cin >> n;
//
//	for (int test = 0; test < n; test++)
//	{
//		int count = 0;
//
//		bool flag = true;
//		bool one = false;
//		bool two = false;
//		bool three = false;
//
//		cin >> size;
//
//		int **board = new int*[size+2];
//		for (int i = 0; i < size+2; i++)
//		{
//			board[i] = new int[size+2];
//		}
//
//		for (int i = 0; i < size+2; i++)
//		{
//			for (int j = 0; j < size+2; j++)
//			{
//				if (i == 0 || i == size + 1)
//				{
//					board[i][j] = 5;
//				}
//				else if (j == 0 || j == size + 1)
//				{
//					board[i][j] = 5;
//				}
//				else cin >> board[i][j];
//			}
//		}
//		for (int i = 1; i < size + 1; i++)
//		{
//			for (int j = 1; j < size + 1; j++)
//			{
//				for (int k = i-1; k < i+2; k++)
//				{
//					for (int l = j-1; l < j+2; l++)
//					{
//						if (board[k][l] == 0)
//							flag = false;
//						else if (board[k][l] == 1)
//							one = true;
//						else if (board[k][l] == 2)
//							two = true;
//						else if (board[k][l] == 3)
//							three = true;
//					}
//				}
//				if (check(flag, one, two, three))
//				{
//					count++;
//				}
//				flag = true;
//				one = false;
//				two = false;
//				three = false;
//			}
//		}
//		cout << "#" << test + 1 << " " << count << endl;
//		
//		for (int i = 0; i < size; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//	}
//
//	return 0;
//}