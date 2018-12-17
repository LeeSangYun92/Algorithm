//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int room = 0;
//int area = 0;
//int maxArea = 0;
//
//int n, m;
//
//void BFS(int **board)
//{
//	vector<int> v;
//	queue<pair<int, int> > q;
//
//	int **visit = new int*[m];
//	for (int i = 0; i < m; i++)
//	{
//		visit[i] = new int[n];
//		for (int j = 0; j < n; j++)
//		{
//			visit[i][j] = 0;
//		}
//	}
//	v.push_back(0); // 1번부터 시작하기 위해 0 채워넣기
//	int num = 1;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (visit[i][j] == 0)
//			{
//				q.push(make_pair(i, j));
//				visit[i][j] = num++;
//
//				int count = 0;
//				while (!q.empty())
//				{
//					int x = q.front().first;
//					int y = q.front().second;
//					int value = board[x][y];
//					q.pop();
//
//					count++;
//
//					if (!(value & 1) && visit[x][y - 1] == 0) //서
//					{
//						q.push(make_pair(x,y - 1));
//						visit[x][y - 1] = visit[i][j];
//					}
//					if (!((value >> 1) & 1) && visit[x - 1][y] == 0) //북
//					{
//						q.push(make_pair(x - 1, y));
//						visit[x - 1][y] = visit[i][j];
//					}
//					if (!((value >> 2) & 1) && visit[x][y + 1] == 0) //동
//					{
//						q.push(make_pair(x, y + 1));
//						visit[x][y + 1] = visit[i][j];
//					}
//					if (!((value >> 3) & 1) && visit[x + 1][y] == 0) //남
//					{
//						q.push(make_pair(x + 1, y));
//						visit[x + 1][y] = visit[i][j];
//					}
//				}
//				v.push_back(count);
//			}
//		}
//	}
//
//	//for (int i = 0; i < m; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cout << visit[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//for (int i = 1; i < v.size(); i++)
//	//{
//	//	cout << i << " " << v[i] << endl;
//	//}
//
//	room = v.size() - 1;
//	area = v[1];
//	for (int i = 2; i < v.size(); i++)
//	{
//		if (area < v[i])
//			area = v[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (j + 1 < n && visit[i][j] != visit[i][j + 1])
//			{
//				if (maxArea < v[visit[i][j]] + v[visit[i][j + 1]])
//					maxArea = v[visit[i][j]] + v[visit[i][j + 1]];
//			}
//			if (i + 1 < m &&visit[i][j] != visit[i + 1][j])
//			{
//				if (maxArea < v[visit[i][j]] + v[visit[i + 1][j]])
//					maxArea = v[visit[i][j]] + v[visit[i + 1][j]];
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		delete[] visit[i];
//	}
//	delete[] visit;
//}
//int main()
//{
//	cin >> n >> m;
//	
//	int **board = new int*[m];
//	for (int i = 0; i < m; i++)
//	{
//		board[i] = new int[n];
//		for (int j = 0; j < n; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	BFS(board);
//	cout << room << endl;
//	cout << area << endl;
//	cout << maxArea << endl;
//	for (int i = 0; i < m; i++)
//	{
//		delete[] board[i];
//	}
//	delete[] board;
//	return 0;
//}