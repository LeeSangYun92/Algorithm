//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N, M, K;
//
//int board[1000][1000] = { 0, };
//bool visit[1000][1000] = { false, };
//vector < pair<pair<int, int>, pair<int, int>>> v;
//
//int BFS()
//{
//	int time = 0;
//	priority_queue<pair<int, pair<int,int>>> q;
//
//	int dx[4] = { 0, 0 , 1, -1 };
//	int dy[4] = { 1,-1, 0, 0 };
//
//	while (time < K)
//	{
//		while (!q.empty())
//		{
//			int x = q.top().second.first;
//			int y = q.top().second.second;
//			q.pop();
//
//			for (int i = 0; i < 4; i++)
//			{
//				int newX = x + dx[i];
//				int newY = y + dy[i];
//
//				if (newX >= 0 && newX < 1000 && newY >= 0 && newY < 1000
//					&& visit[newX][newY] == false)
//				{
//					board[newX][newY] = board[x][y];
//					visit[newX][newY] = true;
//
//					v.push_back(make_pair(make_pair(board[x][y], board[x][y]), make_pair(newX, newY)));
//				}
//			}
//		}
//
//		while(true)
//		{
//			if (v[0].first.first == 0)
//			{
//				v.erase(v.begin());
//			}
//			else break;
//		}
//
//		sort(v.begin(), v.end());
//		
//		for (int i = 0; i < v.size(); i++) 
//		{
//			v[i].first.first--;
//			if (v[i].first.first == 0)
//				q.push({ v[i].first.second, { v[i].second.first,v[i].second.second} });
//		}
//		time++;
//		for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i].second.first << " " << v[i].second.second << endl;
//		}
//		cout << endl;
//	}
//
//	return v.size();
//
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
//
//		for (int i = 500; i < 500 + N; i++)
//		{
//			for (int j = 500; j < 500 + M; j++)
//			{
//				cin >> board[i][j];
//				if (board[i][j] != 0)
//				{
//					v.push_back(make_pair(make_pair(board[i][j], board[i][j]), make_pair(i, j)));
//					visit[i][j] == true;
//				}
//			}
//		}
//		int result = BFS();
//
//		cout << "#" << tc << " " << result << endl;
//
//		memset(board, 0, sizeof(int) * 1000 * 1000);
//		memset(visit, 0, sizeof(bool) * 1000 * 1000);
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int **board;
//int **marking;
//int result;
//priority_queue<pair<int, pair<int, int> > > q;
//vector<pair<int, int> > v[11];
//vector<pair<int, int> > now;
//
//int w, h;
//
//void copyVector()//타임마다 벡터들 땡겨주고 새로 들어온 애들 할당
//{
//	for (int i = v[0].size() - 1; i >= 0; i--)
//	{
//		if (board[v[0][i].first][v[0][i].second] == 1)
//		{
//			v[0].erase(v[0].begin() + i);
//		}
//		else
//			board[v[0][i].first][v[0][i].second]--;
//
//	}
//	for (int i = 1; i < 11; i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//		{
//			v[i - 1].push_back(make_pair(v[i][j].first, v[i][j].second));
//		}
//		v[i].clear();
//	}
//	for (int i = 0; i < now.size(); i++)
//	{
//		v[board[now[i].first][now[i].second]].push_back(make_pair(now[i].first, now[i].second)); //새로 들어온애들 할당 
//	}
//
//}
//void enqueue()
//{
//	for (int i = 0; i < v[0].size(); i++)
//	{
//		q.push(make_pair(board[v[0][i].first][v[0][i].second], make_pair(v[0][i].first, v[0][i].second)));
//	}
//}
//void move(int x, int y)
//{
//	int life = board[x][y];
//	int X[4] = { -1, 1,  0, 0 };
//	int Y[4] = { 0, 0, -1, 1 };
//	for (int i = 0; i < 4; i++)
//	{
//		int newX = x + X[i];
//		int newY = y + Y[i];
//
//		if (board[newX][newY] != -1 && board[newX][newY] == 0)
//		{
//			board[newX][newY] = life;
//			now.push_back(make_pair(newX, newY));
//		}
//
//	}
//}
//
//int BFS(int k)
//{
//	result = 0;
//
//	for (int i = 0; i < k; i++)
//	{
//		enqueue();
//
//		while (!q.empty())
//		{
//			move(q.top().second.first, q.top().second.second);
//			q.pop();
//		}
//		copyVector();
//		now.clear();
//
//
//		/*	for (int i = 0; i < 11; i++)
//		{
//		printf("%d : ",i);
//		for (int j = 0; j < v[i].size(); j++)
//		{
//		printf("%d %d, ", v[i][j].first, v[i][j].second);
//		}
//		printf("\n");
//		}
//		for (int i = 1; i < w-1; i++)
//		{
//		for (int j = 1; j < h-1; j++)
//		{
//		printf("%d ", board[i][j]);
//		}
//		printf("\n");
//		}
//		printf("------------------------------------------------------------------------\n");*/
//
//		if (i == k - 1)
//		{
//			for (int i = 0; i < 11; i++)
//			{
//				result += v[i].size();
//			}
//		}
//
//	}
//
//	return result;
//}
//
//int main()
//{
//	int test_case;
//
//	scanf("%d", &test_case);
//
//	for (int test = 1; test <= test_case; test++)
//	{
//		int n, m, k;
//		int count = 0; // 1시간 뒤로 주어진 경우에 쓸 count 변수
//		scanf("%d%d%d", &n, &m, &k);
//		int width = (n + 2 * k) + 2;
//		int height = (m + 2 * k) + 2;
//
//		board = new int*[width];
//		for (int i = 0; i < width; i++)
//		{
//			board[i] = new int[height];
//			for (int j = 0; j < height; j++)
//			{
//				if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
//				{
//					board[i][j] = -1;
//				}
//				else {
//					board[i][j] = 0;
//				}
//			}
//		}
//
//		for (int i = k + 1; i < n + k + 1; i++)
//		{
//			for (int j = k + 1; j < m + k + 1; j++)
//			{
//				int value;
//				scanf("%d", &value);
//				if (value != 0)
//				{
//					count++;
//					board[i][j] = value;
//					v[value].push_back(make_pair(i, j));
//				}
//			}
//		}
//		w = width;
//		h = height;
//
//		printf("#%d %d\n", test, BFS(k));
//
//		//여기부턴 다음 케이스를 위한 초기화 및 동적할당 해제
//		for (int i = 0; i < width; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//
//		for (int i = 0; i < 10; i++)
//		{
//			v[i].clear();
//		}
//		while (!q.empty())
//		{
//			q.pop();
//		}
//	}
//
//	return 0;
//}