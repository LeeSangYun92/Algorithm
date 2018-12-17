//#include <iostream>
//
//using namespace std;
//
//int Max = -100000001;
//int Min = 100000001;
//int N;
//
//void DFS(int *number, int oper[4], int n, int value)
//{ //n은 남은 연산자의 개수
//	if (n == N - 1)
//	{
//		if (value < Min)
//			Min = value;
//		if (value > Max)
//			Max = value;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) 
//	{
//		if (oper[i] != 0)
//		{
//			oper[i]--;
//			if (i == 0)
//				DFS(number, oper, n + 1, value + number[n]);
//			else if (i == 1)
//				DFS(number, oper, n + 1, value - number[n]);
//			else if (i == 2)
//				DFS(number, oper, n + 1, value * number[n]);
//			else if (i == 3)
//				DFS(number, oper, n + 1, value / number[n]);
//			oper[i]++;
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
//		int *number = new int[N-1];
//		
//		int oper[4];
//		for (int i = 0; i < 4; i++)
//		{ // +, -, *, / 순서
//			cin >> oper[i];
//		}
//
//		int firstNum;
//		cin >> firstNum;
//		for (int i = 0; i < N-1; i++)
//		{
//			cin >> number[i];
//		}
//		
//		DFS(number, oper, 0, firstNum);
//
//		cout << "#" << tc << " " << Max - Min << endl;
//		Max = -100000001;
//		Min = 100000001;
//		delete[] number;
//	}
//	return 0;
//}