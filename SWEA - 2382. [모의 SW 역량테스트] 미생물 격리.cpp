//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N, M, K;
//vector<pair<pair<int, int>, pair<int, int>>> v;
//
//int solution()
//{
//	bool erase_v[1001] = { false, };
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < v.size(); j++)
//		{
//			switch (v[j].second.second)
//			{
//			case 1: //╩С
//			{
//				if ((--v[j].first.first) == 0)
//				{
//					v[j].second.first /= 2;
//					v[j].second.second = 2;
//				}
//				break;
//			}
//			case 2: //го
//			{
//				if ((++v[j].first.first) == N-1)
//				{
//					v[j].second.first /= 2;
//					v[j].second.second = 1;
//				}
//				break;
//			}
//			case 3: //аб
//			{
//				if ((--v[j].first.second) == 0)
//				{
//					v[j].second.first /= 2;
//					v[j].second.second = 4;
//				}
//				break;
//			}
//			case 4: //©Л
//			{
//				if ((++v[j].first.second) == N-1)
//				{
//					v[j].second.first /= 2;
//					v[j].second.second = 3;
//				}
//				break;
//			}
//			}
//		}
//		sort(v.begin(), v.end());
//		for (int j = 0; j < v.size()-1; j++)
//		{
//			if (v[j].first.first == v[j + 1].first.first && v[j].first.second == v[j + 1].first.second)
//			{
//				v[j + 1].second.first += v[j].second.first;
//				erase_v[j] = true;
//			}
//		}
//		for (int j = v.size() - 1; j >= 0; j--)
//		{
//			if (erase_v[j] == true)
//			{
//				v.erase(v.begin() + j);
//			}
//		}
//		for(int j = 0 ; j < 1001; j++)
//		{ 
//			erase_v[j] = false;
//		}
//
//	/*	for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second.first << " " << v[i].second.second << endl;
//		}*/
//
//	}
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		sum += v[i].second.first;
//	}
//	return sum;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N >> M >> K;
//		for (int i = 0; i < K; i++) 
//		{
//			int x, y, num, direction;
//			cin >> x >> y >> num >> direction;
//
//			v.push_back(make_pair(make_pair(x, y), make_pair(num, direction)));
//		}
//
//		cout << "#" << tc << " " << solution() << endl;
//		v.clear();
//	}
//
//	return 0;
//}