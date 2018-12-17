//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int D[1001][3] = { 0, };
//int a[1001][3] = { 0, };
//
//int main()
//{
//	int N;
//
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	
//	D[1][0] = a[1][0];
//	D[1][1] = a[1][1];
//	D[1][2] = a[1][2];
//	for (int i = 2; i <= N; i++)
//	{
//		D[i][0] = min(D[i - 1][1], D[i - 1][2]) + a[i][0];
//		D[i][1] = min(D[i - 1][0], D[i - 1][2]) + a[i][1];
//		D[i][2] = min(D[i - 1][0], D[i - 1][1]) + a[i][2];
//	}
//	
//	int value = min(min(D[N][0], D[N][1]),D[N][2]);
//	cout << value << endl;
//
//	return 0;
//}

//DP가 아닌 DFS로 풀면 시간초과 남
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int board[1001][3] = { 0, };
//int N;
//int Min = 100000000;
//
//void DFS(int time, int score, int last)
//{
//	if (time > N)
//	{
//		Min = min(score, Min);
//		return;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (last == i)
//			continue;
//		DFS(time + 1, score + board[time][i], i);
//	}
//}
//int main()
//{
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		DFS(2, board[1][i], i);
//	}
//
//	cout << Min << endl;
//	return 0;
//}