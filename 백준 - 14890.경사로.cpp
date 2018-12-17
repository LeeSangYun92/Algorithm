//#include <iostream>
//
//using namespace std;
//int N, L;
//
//int check(int *arr)
//{
//	bool *visit = new bool[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = false;
//	}
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		int differ = arr[i] - arr[i + 1];
//
//		if (abs(differ) >= 2)
//			return 0;
//		if (differ < 0) //오르막길일 때
//		{
//			if (i - L < -1)
//				return 0;
//
//			int temp = arr[i];
//			for (int j = i; j > i - L; j--)
//			{
//				if (arr[j] != temp || visit[j] == true)
//					return 0;
//				visit[j] = true;
//			}
//		}
//		else if (differ > 0) //내리막길일 때
//		{
//			if (i + L >= N)
//				return 0;
//			int temp = arr[i + 1];
//			for (int j = i + 1; j <= i + L; j++)
//			{
//				if (arr[j] != temp || visit[j] == true)
//					return 0;
//				visit[j] = true;
//			}
//			i += (L - 1);
//		}
//
//	}
//
//	return 1;
//}
//int main()
//{
//	cin >> N >> L;
//
//	int **board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//		for (int j = 0; j < N; j++) 
//		{
//			cin >> board[i][j];
//		}
//	}
//	int *arr1 = new int[N];
//	int *arr2 = new int[N];
//	int result = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			arr1[j] = board[i][j];
//			arr2[j] = board[j][i];
//		}
//		result += check(arr1);
//		result += check(arr2);
//
//		/*if (check(arr1))
//		{
//			
//			for (int j = 0; j < N; j++)
//			{
//				cout << arr1[j];
//			}
//			cout << endl;
//		}
//		if (check(arr2))
//		{
//			for (int j = 0; j < N; j++)
//			{
//				cout << arr2[j];
//			}
//			cout << endl;
//		}*/
//	}
//
//	cout << result << endl;
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] board[i];
//	}
//	delete[] board;
//	delete[] arr1;
//	delete[] arr2;
//	return 0;
//}