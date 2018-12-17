//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int count = 0;
//	int n;
//	cin >> n;
//
//	vector<pair<int, pair<int, int> > > v;
//
//	for (int i = 0; i < n; i++)
//	{
//		int num, s, b;
//		cin >> num >> s >> b;
//		v.push_back(make_pair(num, make_pair(s, b)));
//	}
//
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			if (j == i)
//				continue;
//			for (int k = 1; k <= 9; k++)
//			{
//				if (k == i || k == j)
//					continue;
//
//				int flag = true;
//
//				for (int m = 0; m < n; m++)
//				{
//					int strike = 0;
//					int ball = 0;
//					int first_num = v[m].first/100;
//					int second_num = (v[m].first - (100 * first_num)) / 10;
//					int third_num = v[m].first - (100 * first_num) - (10 * second_num);
//
//					if (i == first_num)
//						strike++;
//					else if (i == second_num || i == third_num)
//						ball++;
//					
//					if (j == second_num)
//						strike++;
//					else if (j == first_num || j == third_num)
//						ball++;
//
//					if (k == third_num)
//						strike++;
//					else if (k == first_num || k == second_num)
//						ball++;
//
//					if (strike != v[m].second.first)
//					{
//						flag = false;
//					}
//					if (ball != v[m].second.second)
//					{
//						flag = false;
//					}
//				}
//				if (flag)
//				{ 
//					//cout << i << j << k << endl;
//					count++;
//				}
//
//			}
//		}
//	}
//
//	cout << count << endl;
//
//	return 0;
//}