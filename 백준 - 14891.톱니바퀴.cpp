//#include <iostream>
//
//using namespace std;
//void rotate(int arr[4][8], int num, int direction)
//{
//	if (direction == 1)
//	{
//		int temp = arr[num][7];
//
//		for (int i = 7; i >= 1; i--)
//		{
//			arr[num][i] = arr[num][i - 1];
//		}
//		arr[num][0] = temp;
//	}
//	else if (direction == -1)
//	{
//		int temp = arr[num][0];
//
//		for (int i = 1; i < 8; i++)
//		{
//			arr[num][i - 1] = arr[num][i];
//		}
//		arr[num][7] = temp;
//	}
//}
//void left(int arr[4][8], int num, int direction)
//{
//	if (num < 0 || num >= 4)
//	{
//		return;
//	}
//	if (num >= 1 && arr[num][6] != arr[num - 1][2])
//	{
//		left(arr, num - 1, direction*-1);
//	}
//
//	rotate(arr, num, direction);
//}
//void right(int arr[4][8], int num, int direction)
//{
//	if (num < 0 || num >= 4)
//	{
//		return;
//	}
//	if (num <= 2 && arr[num][2] != arr[num + 1][6])
//	{
//		right(arr, num + 1, direction*-1);
//	}
//	rotate(arr, num, direction);
//}
//void check(int arr[4][8], int num, int direction)
//{
//	
//	if (num >= 1 && arr[num][6] != arr[num - 1][2])
//	{
//		left(arr, num - 1, direction*-1);
//	}
//	if (num <= 2 && arr[num][2] != arr[num + 1][6])
//	{
//		right(arr, num + 1, direction*-1);
//	}
//
//	rotate(arr, num, direction);
//}
//
//int main()
//{
//	int arr[4][8];
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			scanf("%1d", &arr[i][j]);
//		}
//	}
//
//	int k;
//	cin >> k;
//
//	for (int i = 0; i < k; i++)
//	{
//		int num, direction;
//		cin >> num >> direction;
//
//		check(arr,num-1, direction);
//		/*rotate(arr, num - 1, direction);
//		for (int j = 0; j < 4; j++)
//		{
//			for (int k = 0; k < 8; k++)
//			{
//				cout << arr[j][k];
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//	}
//	int sum = 0;
//	if (arr[0][0] == 1)
//		sum += 1;
//	if (arr[1][0] == 1)
//		sum += 2;
//	if (arr[2][0] == 1)
//		sum += 4;
//	if (arr[3][0] == 1)
//		sum += 8;
//	
//	cout << sum << endl;
//	return 0;
//}