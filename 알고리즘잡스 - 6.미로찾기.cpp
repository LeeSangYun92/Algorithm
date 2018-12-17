//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int MIN = 100000000;
//int N, M;
////
////void DFS(int **board,int **visit, int i, int j,int count)
////{
////	if (i == 1 && j == M)
////	{
////		if (count < MIN)
////			MIN = count;
////		return;
////	}
////
////	if (visit[i][j + 1] != 1) //오
////	{
////		visit[i][j + 1] = 1;
////		DFS(board, visit, i, j + 1, count+1);
////		visit[i][j + 1] = 0;
////	}
////	if (visit[i - 1][j] != 1) //위
////	{
////		visit[i - 1][j] = 1;
////		DFS(board, visit, i - 1, j, count + 1);
////		visit[i - 1][j] = 0;
////	}
////	if (visit[i + 1][j] != 1) //아래
////	{
////		visit[i + 1][j] = 1;
////		DFS(board, visit, i + 1, j, count + 1);
////		visit[i + 1][j] = 0;
////	}
////	if (visit[i][j - 1] != 1) //왼쪽
////	{
////		visit[i][j - 1] = 1;
////		DFS(board, visit, i, j - 1, count + 1);
////		visit[i][j - 1] = 0;
////	}
////}
//int BFS(int **board,int **visit)
//{	
//	queue<pair<int, int> > q;
//	
//	visit[N][1] = 1;
//	q.push(make_pair(N, 1));
//	
//	int count = 0;
//	int x[4] = { 0,  0, 1, -1 };
//	int y[4] = { 1, -1, 0 , 0 };
//	while (!q.empty())
//	{	
//		int qSize = q.size();
//		for(int k= 0 ; k < qSize; k++)
//		{
//			int i = q.front().first;
//			int j = q.front().second;
//			q.pop();
//
//			if (1 == i && M == j)
//			{
//				return count;
//			}
//
//			for (int k = 0; k < 4; k++)
//			{
//				int newX = i + x[k];
//				int newY = j + y[k];
//				if (board[newX][newY] != 1 && visit[newX][newY] != 1)
//				{
//					visit[newX][newY] = 1;
//					q.push(make_pair(newX, newY));
//				}
//			}
//		}	
//		count++;
//		
//	}
//	return count;
//}
//int main()
//{
//	cin >> N >> M;
//	int **board = new int*[N + 2];
//	int **visit = new int*[N + 2];
//	for (int i = 0; i < N + 2; i++)
//	{
//		board[i] = new int[M + 2];
//		visit[i] = new int[M + 2];
//		for (int j = 0; j < M + 2; j++)
//		{
//			if (j == 0 || j == M + 1 || i == 0 || i == N + 1)
//			{
//				board[i][j] = 1;
//				visit[i][j] = 1;
//			}
//			else {
//				cin >> board[i][j];
//				visit[i][j] = board[i][j];
//			}
//		}
//	}
//
//	//DFS(board,visit, N, 1, 0);
//
//	cout << BFS(board,visit) << endl;
//
//	return 0;
//}