//#include <iostream>
//
//using namespace std;
//
//int day, month, threeMonth, year;
//int Min = 100000000;
//
//void DFS(int plan[12], int total, int n)
//{
//	if (n >= 12)
//	{
//		if (total < Min)
//			Min = total;
//		return;
//	}
//
//	DFS(plan, total + plan[n] * day, n + 1);
//	DFS(plan, total + month, n + 1);
//	DFS(plan, total + threeMonth, n + 3);
//	DFS(plan, total + year, 12);
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> day >> month >> threeMonth >> year;
//		
//		int plan[12];
//		for (int i = 0; i < 12; i++)
//		{
//			cin >> plan[i];
//		}
//
//		DFS(plan, 0, 0);
//
//
//		cout << "#" << tc << " " << Min << endl;
//		Min = 100000000;
//	}
//
//	return 0;
//}