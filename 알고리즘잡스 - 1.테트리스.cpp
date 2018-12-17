//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int c, r;
//
//	cin >> c >> r;
//
//	int **board = new int*[r];
//	for (int i = 0; i < r; i++)
//	{
//		board[i] = new int[c];
//		for (int j = 0; j < c; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	int max_c;
//	int max_score = 0;
//	for (int i = 0; i < c; i++)
//	{
//		int blank = 0;
//		//for (int j = r-1; j >= 0 ; j--)
//		//{
//		//	if (board[j][i] == 0)
//		//	{
//		//		min_r = j;
//		//		break;
//		//	}
//		//}
//		//if (min_r < 3)
//		//	continue; // 아웃되는 라인
//
//		for (int j = 0; j < r; j++)
//		{
//			if (board[j][i] == 0)
//			{
//				blank++;
//			}
//		}
//		if (blank < 4)
//			continue; //아웃되는 경우
//		
//		int score = 0;
//		for (int k = blank-1 ; k >= blank-4 ; k--)
//		{
//			int flag = true;
//			for (int m = 0; m < c; m++)
//			{
//				if (i == m)
//					continue;
//				if (board[k][m] == 0)
//				{
//					flag = false;
//					break;
//				}
//			}
//			if (flag)
//				score++;	
//		}
//		if (score > max_score)
//		{
//			max_score = score;
//			max_c = i;
//			
//		}
//	}
//
//	if (max_score == 0)
//		cout << "0 0" << endl;
//	else
//		cout << max_c+1 << " " << max_score << endl;
//
//	return 0;
//}