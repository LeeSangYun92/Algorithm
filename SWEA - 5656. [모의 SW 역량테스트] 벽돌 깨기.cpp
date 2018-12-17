//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, w, h;
//int MIN = 100000000;
//
//void breakWall(int **board, int x, int y)
//{
//	int value = board[x][y];
//	
//	for (int i = 0; i < value; i++)
//	{
//		if (i == 0)
//		{
//			board[x][y] = 0;
//			continue;
//		}
//			
//		if (x + i < h)
//		{
//			if (board[x + i][y] > 1)
//			{
//				breakWall(board, x + i, y);
//			}
//			else
//				board[x + i][y] = 0;	
//		}
//		if (x - i >= 0)
//		{
//			if (board[x - i][y] > 1)
//			{
//				breakWall(board, x - i, y);
//			}
//			else	
//				board[x - i][y] = 0;
//		}
//		if (y + i < w)
//		{
//			if (board[x][y + i] > 1)
//			{
//				breakWall(board, x, y + i);			
//			}
//			else 
//				board[x][y + i] = 0;
//				
//		}
//		if (y - i >= 0)
//		{
//			if (board[x][y - i] > 1)
//			{
//				breakWall(board, x, y - i);
//			}
//			else 
//				board[x][y - i] = 0;	
//		}
//	}
//}
//
//void arrange(int **board)
//{
//	for (int i = 0; i < w; i++)
//	{
//		queue<int> q;
//		for (int j = h - 1; j >= 0; j--)
//		{
//			if (board[j][i] != 0)
//			{
//				q.push(board[j][i]);
//				board[j][i] = 0;
//			}
//		}
//		int x = h - 1;
//		while (!q.empty())
//		{
//			board[x][i] = q.front();
//			q.pop();
//			x--;
//
//		}
//	}
//}
//
//
//void DFS(int **board, int time)
//{
//	if (time == n)
//	{
//		int count = 0;
//		for (int i = 0; i < h; i++) //남은 벽의 개수세기
//		{
//			for (int j = 0; j < w; j++)
//			{
//				if (board[i][j] != 0)
//					count++;
//			}
//		}
//		if (MIN > count)
//			MIN = count;
//		
//		return;
//	}
//
//	int **temp = new int*[h];
//	for (int i = 0; i < h; i++) 
//	{
//		temp[i] = new int[w];
//		for (int j = 0; j < w; j++)
//		{
//			temp[i][j] = board[i][j]; // 기존의 보드 값 저장해놓을 복구용 2차원 배열 temp
//		}
//	}
//
//	for (int i = 0; i < w; i++)
//	{
//		if (board[h - 1][i] == 0) // 벽이 존재하지 않는 열
//			continue;
//
//		for (int j = 0; j < h; j++) // 가장 위에 있는 벽 index 찾기
//		{
//			if (board[j][i] != 0)
//			{
//				breakWall(board, j, i); //벽 부수기 진행
//				break;
//			}
//		}
//		
//		arrange(board); //벽 정리
//
//		DFS(board, time + 1); // 다음 depth로
//
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				board[i][j] = temp[i][j]; // 값 복구
//			}
//		}
//	}
//
//	for (int i = 0; i < h; i++) // 동적할당 해체
//	{
//		delete[] temp[i];
//	}
//	delete[] temp;
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int test_case = 1; test_case <= T; test_case++)
//	{
//		cin >> n >> w >> h;
//		
//		int **board = new int*[h];
//		for (int i = 0; i < h; i++)
//		{
//			board[i] = new int[w];
//			for (int j = 0; j < w; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		DFS(board, 0);
//		if (MIN == 100000000)
//			cout << "#" << test_case << " " << "0" << endl;
//		else cout << "#" << test_case << " " << MIN << endl;
//		MIN = 100000000; // min 초기화
//	}
//
//	return 0;
//}