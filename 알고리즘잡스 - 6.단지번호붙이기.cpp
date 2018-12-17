//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//int N;
//int home_count[100000];
//
//int BFS(int **board,bool **visit)
//{
//	queue<pair<int, int> > q;
//
//	int count = 0;
//	int X[4] = { 0,  0, 1, -1 };
//	int Y[4] = { 1, -1, 0,  0 };
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visit[i][j] == false && board[i][j] == 1)
//			{
//				count++;
//				q.push(make_pair(i, j));
//				visit[i][j] = true;
//
//				while (!q.empty())
//				{
//					int x = q.front().first;
//					int y = q.front().second;
//					q.pop();
//
//					for (int k = 0; k < 4; k++)
//					{
//						int newX = x + X[k];
//						int newY = y + Y[k];
//
//						if (newX >= 0 && newX < N && newY >= 0 && newY < N && board[newX][newY] == 1 && visit[newX][newY] == false)
//						{
//							q.push(make_pair(newX, newY));
//							visit[newX][newY] = true;	
//						}						
//					}
//					home_count[count]++;	
//				}
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	cin >> N;
//	char **cBoard = new char*[N];
//	int **board = new int*[N];
//	bool **visit = new bool*[N];
//	for (int i = 0; i < N; i++)
//	{
//		cBoard[i] = new char[N];
//		board[i] = new int[N];
//		visit[i] = new bool[N];
//		for (int j = 0; j < N; j++)
//		{
//			cin >> cBoard[i][j];
//			board[i][j] = cBoard[i][j] - '0';
//			visit[i][j] = false; // 방문한 곳은 true
//		}
//	}
//	int count = BFS(board, visit);
//
//	cout << count << endl;
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << home_count[i] << endl;
//	//}
//	sort(home_count + 1, home_count + count + 1);
//	for (int i = 1; i <= count; i++)
//	{
//		cout << home_count[i] << endl;
//	}
//	return 0;
//}