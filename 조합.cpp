//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, R;
//
//vector<vector<int> > v;
//
//void conbination(int n, int r, int *visit)
//{
//	if (n == r)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = 1;
//		}
//		vector<int> v2;
//		for (int i = 0; i < N; i++)
//		{
//			if (visit[i] == 1)
//				v2.push_back(i + 1);
//		}
//		v.push_back(v2);
//		v2.clear();
//		
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = 0;
//		}
//		return;
//	}
//	else if (r == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = 1;
//			vector<int> v2;
//			for (int i = 0; i < N; i++)
//			{
//				if (visit[i] == 1)
//					v2.push_back(i + 1);
//			}
//			v.push_back(v2);
//			v2.clear();
//			visit[i] = 0;
//		}
//		return;
//	}
//
//	visit[n - 1] = 1;
//	conbination(n - 1, r - 1, visit);
//	visit[n - 1] = 0;
//	conbination(n - 1, r, visit);
//}
//
//int main()
//{
//	cin >> N >> R;
//
//	int *visit = new int[N];
//
//	conbination(N, R,visit);
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = 0; j < R; j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}