//#include <iostream>
//
//using namespace std;
//
//int n[11] = { 0, };
//int D[11] = { 0, };
//int main()
//{
//	int N; 
//	cin >> N;
//	
//	for (int i = 0; i < N; i++)
//	{
//		cin >> n[i];
//	}
//
//	D[1] = 1;
//	D[2] = 2;
//	D[3] = 4;
//
//	for (int i = 4; i <= 10; i++)
//	{
//		D[i] = D[i - 1] + D[i - 2] + D[i - 3];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << D[n[i]] << endl;
//	}
//
//	return 0;
//}