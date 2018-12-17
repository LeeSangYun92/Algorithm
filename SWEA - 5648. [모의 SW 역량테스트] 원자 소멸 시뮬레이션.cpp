//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//typedef struct ATOM {
//	int x;
//	int y;
//	int direction;
//	int k;
//	bool crash;
//}Atom;
//
//typedef struct MAP {
//	int index;
//	int time;
//}Map;
//
//int N;
//Atom atom[1001];
//Map map[4001][4001];
//
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//
//int main()
//{
//	int T;
//	cin >> T;
//
//
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//		{
//			int x, y, d, k;
//			cin >> x >> y >> d >> k;
//
//			atom[i].x = x * 2 + 2000;
//			atom[i].y = y * 2 + 2000;
//			atom[i].direction = d;
//			atom[i].k = k;
//			atom[i].crash = false;
//		}
//
//		int time = 1;
//		int result = 0;
//		while (time <= 4001)
//		{
//			for (int i = 0; i < N; i++)
//			{
//				if (atom[i].crash == false)
//				{
//					atom[i].x += dx[atom[i].direction];
//					atom[i].y += dy[atom[i].direction];
//					if (atom[i].x > 4000 || atom[i].x < 0 || atom[i].y > 4000 || atom[i].y < 0)
//					{
//						atom[i].crash = true;
//						continue;
//					}
//
//					
//					if (map[atom[i].x][atom[i].y].time == time)
//					{
//						atom[i].crash = true;
//						result += atom[i].k;
//
//						if (atom[map[atom[i].x][atom[i].y].index].crash == false)
//						{
//							atom[map[atom[i].x][atom[i].y].index].crash = true;
//							result += atom[map[atom[i].x][atom[i].y].index].k;
//						}
//					}
//					else
//					{
//						map[atom[i].x][atom[i].y].time = time;
//						map[atom[i].x][atom[i].y].index = i;
//					}
//				}
//			}
//			
//			time++;
//		}
//
//		cout << "#" << tc << " " << result << endl;
//
//		memset(map, 0, sizeof(map));
//	}
//
//	return 0;
//}











//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<pair<pair<double,double> , pair<double, double>>> v;
//
//int main()
//{
//	int t; 
//	cin >> t;
//
//	for (int test_case = 1; test_case <= t; test_case++)
//	{
//		int n;
//		cin >> n;
//
//		for (int i = 0; i < n; i++)
//		{
//			double x, y, d, k;
//			cin >> x >> y >> d >> k;
//
//			v.push_back(make_pair(make_pair(x, y), make_pair(d,k)));
//		}
//
//		int crashV[1001] = { 0, };
//		int sum = 0;
//		for(int q = 0 ; q < 4001; q++)
//		{
//			int flag = false;
//			for (int j = 0; j < v.size(); j++)
//			{
//				if (crashV[j] == 0)
//					flag = true;
//			}
//			if (flag == false)
//				break;
//
//			for (int j = 0; j < v.size(); j++) // 모든 원자들 0.5 칸씩 진행
//			{
//				if (crashV[j] == 0)
//				{
//					if (v[j].second.first == 0)
//					{
//						v[j].first.second += 0.5;
//					}
//					else if (v[j].second.first == 1)
//					{
//						v[j].first.second -= 0.5;
//					}
//					else if (v[j].second.first == 2)
//					{
//						v[j].first.first -= 0.5;
//					}
//					else if (v[j].second.first == 3)
//					{
//						v[j].first.first += 0.5;
//					}
//					
//					if (v[j].first.first > 1000 || v[j].first.first < -1000 || v[j].first.second > 1000 || v[j].first.second < -1000)
//					{	// 범위를 벗어난 애들은 지우기 위해 표시
//
//						crashV[j] = 2;
//					}
//				}		
//			}
//
//			for (int j = 0; j < v.size();j++) //충돌이 일어난 애들 표시
//			{
//				if (crashV[j] == 0)
//				{
//					for (int k = j+1; k < v.size(); k++)
//					{
//						if (crashV[k] == 0 && v[j].first.first == v[k].first.first && v[j].first.second == v[k].first.second)
//						{
//							crashV[j] = 1;
//							crashV[k] = 1;
//						}
//					}
//				}					
//			}
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (crashV[i] == 1)
//				sum += v[i].second.second;
//		}
//
//		v.clear();
//		
//		cout << "#" << test_case << " " << sum << endl;
//	}
//	return 0;
//}

/*if (eraseV[j] != true)
{
for (int k = j + 1; k < v.size(); k++)
{
if (v[j].first.first == v[k].first.first && v[j].first.second == v[k].first.second)
{
eraseV[j] = true;
eraseV[k] = true;
}
else if ((v[j].second.first == 1 && v[k].second.first == 0) && v[j].first.first == v[k].first.first && v[j].first.second - 0.5 == v[k].first.second + 0.5)
{
eraseV[j] = true;
eraseV[k] = true;
}
else if ((v[j].second.first == 0 && v[k].second.first == 1) && v[j].first.first == v[k].first.first && v[j].first.second + 0.5 == v[k].first.second - 0.5)
{
eraseV[j] = true;
eraseV[k] = true;
}
else if ((v[j].second.first == 2 && v[k].second.first == 3) && v[j].first.first - 0.5 == v[k].first.first + 0.5 && v[j].first.second == v[k].first.second)
{
eraseV[j] = true;
eraseV[k] = true;
}
else if ((v[j].second.first == 3 && v[k].second.first == 2) && v[j].first.first  + 0.5 == v[k].first.first - 0.5 && v[j].first.second == v[k].first.second)
{
eraseV[j] = true;
eraseV[k] = true;
}
}
}	*/