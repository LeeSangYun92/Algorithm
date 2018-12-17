//#include <iostream>
//
//using namespace std;
//
//int **seat;
//
//void solution(int c, int r, int k)
//{
//	int num = 0;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = r - i - 1; j >= i; j--) //╩С
//		{
//			seat[j][i] = ++num;
//			if (num == k)
//			{
//				cout << i + 1 << " " << r - j << endl;
//				return;
//			}
//				
//		}
//		for (int j = i + 1; j < c - i; j++) //©Л
//		{
//			seat[i][j] = ++num;
//			if (num == k)
//			{
//				cout << j + 1 << " " << r - i << endl;
//				return;
//			}
//		}
//		for (int j = i + 1; j < r - i; j++) //го
//		{
//			seat[j][c-i-1] = ++num;
//			if (num == k)
//			{
//				cout << c - i << " " << r - j << endl;
//				return;
//			}
//		}
//		for (int j = c-i-2 ; j > i; j--) //аб
//		{
//			seat[r - i - 1][j] = ++num;
//			if (num == k)
//			{
//				cout << j + 1<< " " << i + 1 << endl;
//				return;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int c, r, k;
//	cin >> c >> r >> k;
//	
//	seat = new int*[r];
//	for (int i = 0; i < r; i++)
//	{
//		seat[i] = new int[c];
//		for (int j = 0; j < c; j++)
//			seat[i][j] = 0;
//	}
//	if (c*r < k)
//		cout << "0" << endl;
//	else
//		solution(c, r, k);
//
//	return 0;
//}