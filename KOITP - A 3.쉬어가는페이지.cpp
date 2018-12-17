//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int N, S, J, K;
//
//	cin >> n;
//
//	for (int test = 0; test < n; test++)
//	{
//		cin >> N >> S >> J >> K;
//		
//		int result = 0;
//		int *k = new int[K];
//
//		for (int i = 0; i < K; i++)
//		{
//			cin >> k[i];
//		}
//
//		for (int i = S; i <= N; i += J+1)
//		{
//			for (int j = 0; j < K; j++)
//			{
//				if (i == k[j])
//				{
//					result++;
//				}
//			}
//		}
//
//		cout << "#" << test + 1 << " " << result << endl;
//		delete[] k;
//		
//	}
//
//	return 0;
//}