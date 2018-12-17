//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int N, P, M;
//	long long int sum = 0;
//
//	cin >> n;
//
//	for (int test = 0; test < n; test++)
//	{
//		cin >> N >> P >> M;
//		int *num = new int[N];
//		
//		for (int i = 0; i < N; i++)
//		{
//			cin >> num[i];
//		}
//
//		/*for (int i = 1; i < N; i++)
//		{
//			for (int j = 1; j < N; j++)
//			{
//				if (num[i] < num[j])
//				{
//					int temp = num[i];
//					num[i] = num[j];
//					num[j] = temp;
//				}
//			}
//		}*/
//
//		sort(num+1, num + N);
//		//for (int i = 0; i < N; i++)
//		//{
//		//	cout << num[i] << " ";
//		//}
//		//cout << endl;
//		for (int i = 1; i <= M; i++)
//		{
//			num[i] *= -1;
//		}
//
//		//for (int i = 0; i < N; i++)
//		//{
//		//	cout << num[i] << " ";
//		//}
//		//cout << endl;
//		for (int i = 0; i < N; i++)
//		{
//			sum += num[i];
//		}
//		
//		cout << "#" << test + 1 << " " << sum << endl;
//
//		delete[] num;
//		sum = 0;
//	}
//	return 0;
//}