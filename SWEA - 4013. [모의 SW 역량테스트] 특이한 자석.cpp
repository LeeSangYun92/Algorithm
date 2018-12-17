//#include <iostream>
//
//using namespace std;
//
//void rotation(int magnet[4][8],int num, int direction)
//{
//	if (direction == 1)
//	{
//		int temp = magnet[num][7];
//		for (int i = 7; i > 0; i--)
//		{
//			magnet[num][i] = magnet[num][i - 1];
//		}
//		magnet[num][0] = temp;
//	}
//	else if (direction == -1)
//	{
//		int temp = magnet[num][0];
//		for (int i = 0; i < 7 ;i++)
//		{
//			magnet[num][i] = magnet[num][i + 1];
//		}
//		magnet[num][7] = temp;
//	}
//}
//void run(int magnet[4][8],int temp[4][8], int num, int direction, int lr)
//{
//	//lr == 0 양쪽 다 진행, 1일땐 왼쪽, 2일땐 오른쪽만
//	rotation(temp, num, direction);
//	
//	if (num - 1 >= 0 && magnet[num][6] != magnet[num-1][2] && (lr == 0 || lr == 1))
//	{
//		run(magnet, temp, num - 1, direction*-1, 1);
//	}
//	if (num + 1 < 4 && magnet[num][2] != magnet[num + 1][6] && (lr == 0 || lr == 2))
//	{
//		run(magnet, temp, num + 1, direction*-1, 2);
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		int k;
//		cin >> k;
//
//		int magnet[4][8];
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 8; j++)
//			{
//				cin >> magnet[i][j];
//			}
//		}
//
//		for (int i = 0; i < k; i++)
//		{
//			int num, direction;
//			cin >> num >> direction;
//			num--; //배열이 0부터 시작하므로 1 줄여줌
//
//			int temp[4][8];
//			for(int i = 0; i <4; i++)
//			{ 
//				for (int j = 0; j < 8; j++)
//				{
//					temp[i][j] = magnet[i][j];
//				}
//			}
//
//			run(magnet, temp, num, direction, 0);
//			
//			for (int i = 0; i <4; i++)
//			{
//				for (int j = 0; j < 8; j++)
//				{
//					magnet[i][j] = temp[i][j];
//				}
//			}
//		}
//		int sum = 0;
//		if (magnet[0][0] == 1)
//			sum += 1;
//		if (magnet[1][0] == 1)
//			sum += 2;
//		if (magnet[2][0] == 1)
//			sum += 4;
//		if (magnet[3][0] == 1)
//			sum += 8;
//
//		cout << "#" << tc << " " << sum << endl;
//	}
//	return 0;
//}