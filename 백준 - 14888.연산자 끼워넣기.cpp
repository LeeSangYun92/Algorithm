//#include <iostream>
//
//using namespace std;
//
//int Max = -1000000001;
//int Min = 1000000001;
//int n;
//
//void DFS(int *arr, int oper[4],int time, int score)
//{
//	if (time == n - 1)
//	{
//		if (score > Max)
//			Max = score;
//		if (score < Min)
//			Min = score;
//		return;
//	}
//
//	if (oper[0] > 0)
//	{
//		oper[0]--;
//		DFS(arr, oper, time + 1, score + arr[time + 1]);
//		oper[0]++;
//	}
//	if (oper[1] > 0)
//	{
//		oper[1]--;
//		DFS(arr, oper, time + 1, score - arr[time + 1]);
//		oper[1]++;
//	}
//	if (oper[2] > 0)
//	{
//		oper[2]--;
//		DFS(arr, oper, time + 1, score * arr[time + 1]);
//		oper[2]++;
//	}
//	if (oper[3] > 0)
//	{
//		oper[3]--;
//		DFS(arr, oper, time + 1, score / arr[time + 1]);
//		oper[3]++;
//	}
//}
//
//int main()
//{
//	cin >> n;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int oper[4];
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> oper[i];
//	}
//
//	DFS(arr, oper, 0, arr[0]);
//
//	cout << Max << endl;
//	cout << Min << endl;
//
//	return 0;
//}