//#include <iostream>
//
//using namespace std;
//
//int board[5][5];
//int marking[5][5];
//
//int count_bingo()
//{
//	int count = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		int flag1 = true;
//		int flag2 = true;
//
//		for (int j = 0; j < 5; j++)
//		{
//			if (marking[i][j] != 1)
//				flag1 = false;
//			if (marking[j][i] != 1)
//				flag2 = false;
//		}
//		if (flag1)
//			count++;
//		if (flag2)
//			count++;
//	}
//
//	int flag1 = true;
//	int flag2 = true;
//	for (int i = 0; i < 5; i++)
//	{
//		if (marking[i][i] != 1)
//			flag1 = false;
//		if (marking[4 - i][i] != 1)
//			flag2 = false;
//	}
//	if (flag1)
//		count++;
//	if (flag2)
//		count++;
//
//	return count;
//
//
//}
//
//void check(int num)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (board[i][j] == num)
//				marking[i][j] = 1;
//		}
//	}
//}
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 1; i <= 25; i++)
//	{
//		int num;
//		cin >> num;
//		check(num);
//
//		if (count_bingo() > 2)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//
//	return 0;
//}