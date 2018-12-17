//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int MIN = 100000000;
//int N, M;
//
//void BFS(int **board, int **dis, int startX, int startY, int targetX, int targetY)
//{	
//	bool  **visit = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		visit[i] = new bool[M];
//		for (int j = 0; j < M; j++)
//		{
//			visit[i][j] = false; //방문하지 않은곳 false
//		}
//	}
//
//	queue<pair<int, int> > q;
//	
//	visit[startX][startY] = true;
//	q.push(make_pair(startX, startY));
//	
//	int count = 0;
//	int x[4] = { 0,  0, 1, -1 };
//	int y[4] = { 1, -1, 0 , 0 };
//	while (!q.empty())
//	{
//		count++;
//		int qSize = q.size();
//		for(int k= 0 ; k < qSize; k++)
//		{
//			int i = q.front().first;
//			int j = q.front().second;
//			q.pop();
//
//			if (targetX == i && targetY == j)
//			{
//				MIN = count-1;
//			}
//
//			for (int k = 0; k < 4; k++)
//			{
//				int newX = i + x[k];
//				int newY = j + y[k];
//				if (newX >= 0 && newX < N && newY >= 0 && newY < M && board[newX][newY] == 1 && visit[newX][newY] == false)
//				{
//						dis[newX][newY] = count; //각 벽까지의 거리를 저장
//						visit[newX][newY] = true;
//				}
//				if (newX >= 0 && newX < N && newY >= 0 && newY < M && board[newX][newY] == 0 && visit[newX][newY] == false)
//				{
//					visit[newX][newY] = true;
//					q.push(make_pair(newX, newY));
//				}
//				
//			}
//		}	
//	}
//	for (int i = 0; i < N; i++)
//	{
//		delete[] visit[i];
//	}
//	delete[] visit;
//
//}
//int main()
//{
//	cin >> N >> M;
//	int **board = new int*[N];
//	int **dis = new int*[N];
//	int **dis2 = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[M];
//		dis[i] = new int[M];
//		dis2[i] = new int[M];
//		for (int j = 0; j < M; j++)
//		{
//			cin >> board[i][j];
//			dis[i][j] = 0;
//			dis2[i][j] = 0;
//		}
//	}
//	BFS(board, dis, N - 1, 0, 0, M - 1);
//	BFS(board, dis2, 0, M - 1, N - 1, 0);
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (dis[i][j] + dis2[i][j] < MIN && dis[i][j] != 0 && dis2[i][j] !=0)
//				MIN = dis[i][j] + dis2[i][j];
//
//			//cout << i << " " << j << " " <<dis[i][j] << endl;
//		}
//	}
//	cout << MIN << endl;
//	return 0;
//}