//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector<pair<int, pair<int,int> > > v;
//int N, M;
//int **board;
//int MIN = 100000000;
//void right(int i, int j,int count)
//{
//	for (int k = j + 1; k < M; k++)
//	{
//		if (board[i][k] == 6)
//			break;
//		else
//		{
//			board[i][k] = -1;
//		}
//	}
//}
//void left(int i, int j, int count)
//{
//	for (int k = j - 1; k >= 0; k--)
//	{
//		if (board[i][k] == 6)
//			break;
//		else
//		{
//			board[i][k] = -1;
//		}
//	}
//}
//void up(int i, int j, int count)
//{
//	for (int k = i - 1; k >=0 ; k--)
//	{
//		if (board[k][j] == 6)
//			break;
//		else {
//			board[k][j] = -1;
//		}
//	}
//}
//void down(int i, int j, int count)
//{
//	for (int k = i + 1; k < N; k++)
//	{
//		if (board[k][j] == 6)
//			break;
//		else {
//			board[k][j] = -1;
//		}
//	}
//}
//void DFS(int count)
//{	//depth = count
//	if (count == v.size())
//	{
//		int count = 0;
//		//남은 사각지대의 수 계산
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				if (board[i][j] == 0)
//					count++;
//			}
//		}
//	/*	for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				cout << board[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		if (count < MIN)
//			MIN = count;
//		return;
//	}
//	int **temp = new int*[N]; //임시 저장 2차원 배열
//	for (int i = 0; i < N; i++)
//	{
//		temp[i] = new int[M];
//		for (int j = 0; j < M; j++)
//		{
//			temp[i][j] = board[i][j]; // board 값 복사
//		}
//	}
//
//	if (v[count].first == 5)
//	{
//		right(v[count].second.first, v[count].second.second,count);
//		left(v[count].second.first, v[count].second.second, count);
//		up(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//	}
//	if (v[count].first == 4)
//	{
//		right(v[count].second.first, v[count].second.second, count);
//		left(v[count].second.first, v[count].second.second, count);
//		up(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		right(v[count].second.first, v[count].second.second, count);
//		left(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		right(v[count].second.first, v[count].second.second, count);
//		up(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		left(v[count].second.first, v[count].second.second, count);
//		up(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//	}
//	if (v[count].first == 3)
//	{
//		left(v[count].second.first, v[count].second.second, count);
//		up(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		left(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		right(v[count].second.first, v[count].second.second, count);
//		up(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		right(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//	}
//	if (v[count].first == 2)
//	{
//		up(v[count].second.first, v[count].second.second, count);
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		right(v[count].second.first, v[count].second.second, count);
//		left(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//	}
//	if (v[count].first == 1)
//	{
//		right(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		left(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		up(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//
//		down(v[count].second.first, v[count].second.second, count);
//		DFS(count + 1);
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				board[i][j] = temp[i][j]; // board 값 다시 복구
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] temp[i];
//	}
//	delete[] temp;
//}
//int main()
//{
//	cin >> N >> M;
//
//	board = new int*[N];
//	for (int i = 0; i < N; i++)
//	{
//		board[i] = new int[M];
//		for (int j = 0; j < M; j++)
//		{
//			cin >> board[i][j];
//			if (board[i][j] != 0 && board[i][j] != 6)
//				v.push_back(make_pair(board[i][j],make_pair(i, j)));
//		}
//	}
//
//	DFS(0);
//
//	cout << MIN << endl;
//}