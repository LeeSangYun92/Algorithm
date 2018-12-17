//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <cmath>
//
//using namespace std;
//int N, M;
//int Min = 100000000;
//
//vector<pair<int, int>> home;
//vector<pair<int, int>> chicken;
//void cal_distance(int num, int *temp)
//{
//	for (int i = 0; i < home.size(); i++)
//	{
//		int distance = abs(home[i].first - chicken[num].first) + abs(home[i].second - chicken[num].second);
//		if (distance < temp[i])
//			temp[i] = distance;
//	}
//
//}
//void combination(int **board, bool *visit, int n, int r)
//{
//	if (n == r)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = true;
//		}
//
//		int *temp = new int[home.size()];
//		for (int i = 0; i < home.size(); i++)
//		{
//			temp[i] = 100000000;
//		}
//
//		for (int i = 0; i <	chicken.size(); i++)
//		{
//			if (visit[i] == true)
//			{
//				cal_distance(i, temp);
//			}
//		}
//
//		int sum = 0;
//		for (int k = 0; k < home.size(); k++)
//		{
//			sum += temp[k];
//		}
//
//		if (sum < Min)
//			Min = sum;
//
//		delete[] temp;
//
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = false;
//		}
//		return;
//	}
//	else if (r == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = true;
//
//			int *temp = new int[home.size()];
//			for (int i = 0; i < home.size(); i++)
//			{
//				temp[i] = 100000000;
//			}
//
//			for (int j = 0; j < chicken.size(); j++)
//			{
//				if (visit[j] == true)
//				{
//					cal_distance(j, temp);
//				}
//			}
//
//			int sum = 0;
//			for (int k = 0; k < home.size(); k++)
//			{
//				sum += temp[k];
//			}
//
//			
//			if (sum < Min)
//				Min = sum;
//
//			delete[] temp;
//
//			visit[i] = false;
//		}
//		return;
//	}
//
//	visit[n - 1] = true;
//	combination(board, visit, n - 1, r - 1);
//	visit[n - 1] = false;
//	combination(board, visit, n - 1, r);
//}
//int main()
//{
//	cin >> N >> M;
//
//	int **board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//		for (int j = 0; j < N; j++)
//		{
//			cin >> board[i][j];
//
//			if (board[i][j] == 1)
//				home.push_back({ i,j });
//			else if (board[i][j] == 2)
//				chicken.push_back({ i,j });
//		}
//	}
//
//	bool *visit = new bool[chicken.size()];
//	for (int i = 0; i < chicken.size(); i++)
//	{
//		visit[i] = false;
//	}
//
//	combination(board, visit, chicken.size(), M);
//
//	cout << Min << endl;
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] board[i];
//	}
//	delete[] board;
//
//	return 0;
//}





//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//int N, M;
//int min_dis = 100000;
//vector<pair<int, int> > home_v;
//vector<pair<int, int> > chicken_v;
//vector< vector<int> > v;
//
//void cal(int i,int *temp)
//{
//	for (int j = 0; j < home_v.size() ; j++)
//	{
//		int t = abs(home_v[j].first - chicken_v[i].first) + abs(home_v[j].second - chicken_v[i].second);
//		if (temp[j] > t)
//			temp[j] = t;
//	}
//}
//
//void combination(int n, int r, int *visit)
//{
//	if (n == r)
//	{
//		vector<int> v2;
//
//		for (int i = 0; i < n; i++)
//		{
//			visit[i] = 1;
//		}
//		for (int i = 0; i < chicken_v.size(); i++)
//		{
//			if (visit[i] == 1)
//				v2.push_back(i);
//		}
//		for (int i = 0; i < n; i++)
//			visit[i] = 0;
//		v.push_back(v2);
//		v2.clear();
//		
//		return;
//	}
//	else if (r == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			vector<int> v2;
//			visit[i] = 1;
//			for (int j = 0; j < chicken_v.size(); j++)
//			{
//				if (visit[j] == 1)
//				{
//					v2.push_back(j);
//				}
//			}
//			visit[i] = 0;
//			v.push_back(v2);
//			v2.clear();
//		}
//		return;
//	}
//	
//	visit[n - 1] = 1;
//	combination(n - 1, r - 1, visit);
//	visit[n - 1] = 0;
//	combination(n - 1, r, visit);
//}
//int main()
//{
//	cin >> N >> M;
//	
//	int **board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[N];
//		for (int j = 0; j < N; j++)
//		{
//			cin >> board[i][j];
//			if (board[i][j] == 1)
//				home_v.push_back(make_pair(i, j));
//			if (board[i][j] == 2)
//				chicken_v.push_back(make_pair(i, j));			
//		}
//	}
//
//	int *visit = new int[chicken_v.size()];
//
//	combination(chicken_v.size(), M, visit); //선택되는 집의 조합
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		int *temp = new int[home_v.size()]; //집에서 치킨집까지의 거리를 넣어두는 임시 배열
//		for (int i = 0; i < home_v.size(); i++) 
//			temp[i] = 100000;
//		for (int j = 0; j < M; j++)
//		{
//			cal(v[i][j], temp);
//		}
//		int sum = 0;
//		for (int i = 0; i < home_v.size(); i++)
//		{
//			sum += temp[i];
//		}
//		if (sum < min_dis)
//			min_dis = sum;
//		delete[] temp;
//	}
//	
//	cout << min_dis << endl;
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] board[i];
//	}
//	delete[] visit;
//	delete[] board;
//	home_v.clear();
//	chicken_v.clear();
//	return 0;
//}