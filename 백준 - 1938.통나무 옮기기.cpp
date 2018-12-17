//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
////가로는 0 세로는 1 , 그리고 중심의 위치 x, y
//bool visit[2][60][60] = { false, };
//vector<pair<int, pair<int, int>>> v1;
//vector<pair<int, pair<int, int>>> v2;
//
//int BFS(int **board, int n)
//{   
//	queue < pair<int, pair<int, int>>> q;
//
//	q.push(make_pair(v1[0].first, make_pair(v1[0].second.first, v1[0].second.second)));
//	visit[v1[0].first][v1[0].second.first][v1[0].second.second] = true;
//	
//	int count = -1;
//	while (!q.empty())
//	{
//		int qSize = q.size();
//		
//		count++;
//		//cout << q.size() << endl;
//		for (int i = 0; i < qSize; i++)
//		{
//			int treeState = q.front().first;
//			int x = q.front().second.first;
//			int y = q.front().second.second;
//			q.pop();
//
//			//cout << treeState << " " << x << " " << y << endl;
//
//			if (treeState == v2[0].first && x == v2[0].second.first && y == v2[0].second.second)
//			{
//				return count;
//			}
//
//			if (treeState == 0) //가로 일때
//			{//상 하 좌 우 회전 순으로 검사
//				if (x - 1 >= 0 && board[x - 1][y - 1] == 0 && board[x - 1][y] == 0 && board[x - 1][y + 1] == 0 &&
//					visit[treeState][x - 1][y] == false)
//				{
//					visit[treeState][x - 1][y] = true;
//					q.push(make_pair(treeState, make_pair(x - 1, y)));
//				}
//				if (x + 1 < n && board[x + 1][y - 1] == 0 && board[x + 1][y] == 0 && board[x + 1][y + 1] == 0 &&
//					visit[treeState][x + 1][y] == false)
//				{
//					visit[treeState][x + 1][y] = true;
//					q.push(make_pair(treeState, make_pair(x + 1, y)));
//				}
//				if (y - 2 >= 0 && board[x][y - 2] == 0 && visit[treeState][x][y - 1] == false)
//				{
//					visit[treeState][x][y - 1] = true;
//					q.push(make_pair(treeState, make_pair(x, y - 1)));
//				}
//				if (y + 2 < n && board[x][y + 2] == 0 && visit[treeState][x][y + 1] == false)
//				{
//					visit[treeState][x][y + 1] = true;
//					q.push(make_pair(treeState, make_pair(x, y + 1)));
//				}
//				if (x - 1 >= 0 && y - 1 >= 0 && x + 1 < n && y + 1 < n && board[x - 1][y - 1] == 0 && board[x - 1][y] == 0 && board[x - 1][y + 1] == 0 &&
//					board[x + 1][y - 1] == 0 && board[x + 1][y] == 0 && board[x + 1][y + 1] == 0 && visit[1][x][y] == false)
//				{
//					visit[1][x][y] = true;
//					q.push(make_pair(1, make_pair(x, y)));
//				}
//			}
//			else //세로 일때
//			{
//				if (x - 2 >= 0 && board[x - 2][y] == 0 && visit[treeState][x - 1][y] == false)
//				{
//					visit[treeState][x - 1][y] = true;
//					q.push(make_pair(treeState, make_pair(x - 1, y)));
//				}
//				if (x + 2 < n && board[x + 2][y] == 0 && visit[treeState][x + 1][y] == false)
//				{
//					visit[treeState][x + 1][y] = true;
//					q.push(make_pair(treeState, make_pair(x + 1, y)));
//				}
//				if (y - 1 >= 0 && board[x - 1][y - 1] == 0 && board[x][y - 1] == 0 && board[x + 1][y - 1] == 0 &&
//					visit[treeState][x][y - 1] == false)
//				{
//					visit[treeState][x][y-1] = true;
//					q.push(make_pair(treeState, make_pair(x, y - 1)));
//				}
//				if (y + 1 < n && board[x - 1][y + 1] == 0 && board[x][y + 1] == 0 && board[x + 1][y + 1] == 0 &&
//					visit[treeState][x][y + 1] == false)
//				{
//					visit[treeState][x][y + 1] = true;
//					q.push(make_pair(treeState, make_pair(x, y + 1)));
//				}
//				if (x - 1 >= 0 && y - 1 >= 0 && x + 1 < n && y + 1 < n && board[x - 1][y - 1] == 0 && board[x][y - 1] == 0 && board[x + 1][y - 1] == 0 &&
//					board[x - 1][y + 1] == 0 && board[x][y + 1] == 0 && board[x + 1][y + 1] == 0 && visit[0][x][y] == false)
//				{
//					visit[0][x][y] = true;
//					q.push(make_pair(0, make_pair(x, y)));
//				}
//			}	
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	int Bcount = 0;
//	int Ecount = 0;
//
//	int **board = new int *[n];
//	for (int i = 0; i < n; i++)
//	{
//		board[i] = new int[n];
//		for (int j = 0; j < n; j++)
//		{
//			char c;
//			cin >> c;
//
//			if (c == 'B')
//			{
//				board[i][j] = 2;
//				Bcount++;
//				if (Bcount == 2)
//				{
//					if (i - 1 >= 0 && board[i - 1][j] == 2)
//						v1.push_back(make_pair(1, make_pair(i, j)));
//					else if(j - 1 >= 0 && board[i][j-1] == 2)
//						v1.push_back(make_pair(0, make_pair(i, j)));
//				}
//			}
//			else if (c == 'E')
//			{
//				board[i][j] = 3;
//				Ecount++;
//				if (Ecount == 2)
//				{
//					if (i - 1 >= 0 && board[i - 1][j] == 3)
//						v2.push_back(make_pair(1, make_pair(i, j)));
//					else if (j - 1 >= 0 &&board[i][j - 1] == 3)
//						v2.push_back(make_pair(0, make_pair(i, j)));
//				}
//			}		
//			else if (c == '0')
//				board[i][j] = 0;
//			else if (c == '1')
//				board[i][j] = 1;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (board[i][j] == 2 || board[i][j] == 3)
//				board[i][j] = 0;
//		}
//	}
//
//	cout << BFS(board, n) << endl;
//
//
//
//	return 0;
//}