//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <functional>
//
//using namespace std;
//int N, K;
//vector<string> v;
//
//void combination(int n, int k, int *visit)
//{
//	if (n == k)
//	{
//		string str = "";
//		for (int i = 0; i < n; i++)
//			visit[i] = 1;
//		for (int i = 0; i < N; i++)
//		{
//			if (visit[i] == 1)
//				str += '1';
//			else str += '0';
//		}
//		for (int i = 0; i < n; i++)
//			visit[i] = 0;
//		v.push_back(str);
//		
//		return;
//	}
//	else if (k == 1)
//	{
//		string str = "";
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = 1;
//			for (int j = 0; j < N; j++)
//			{
//				if (visit[j] == 1)
//					str += '1';
//				else str += '0';
//			}
//			v.push_back(str);
//			str = "";
//			visit[i] = 0;
//		}
//		//v.push_back(atoi(str.c_str()));
//		return;
//	}
//	else if (k == 0)
//	{
//		string str = "";
//		for (int i = 0; i < N; i++)
//			str += '0';
//		v.push_back(str);
//		return;
//	}
//	visit[n - 1] = 1;
//	combination(n - 1, k - 1, visit);
//	visit[n - 1] = 0;
//	combination(n - 1, k, visit);
//}
//int main()
//{
//
//	cin >> N >> K;
//	
//	int *visit = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = 0;
//	}
//
//	combination(N, K, visit);
//
//	sort(v.begin(), v.begin() + v.size(), greater<string>());
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//	return 0;
//}