// ��ͷ� Ǯ�� ���� ���ļ� 49�������� �°� 50��°���� ��Ÿ�� ���� �Ͼ
// �ݺ������� �ٲ� Ǯ�� ���

//#include <iostream>
//
//using namespace std;
//
//int N;
//int Max = 0;
//bool start = false;
//
//int main()
//{
//	int T; 
//	cin >> T;
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N;
//		int **board = new int*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		int currentX;
//		int currentY;
//		int startX;
//		int startY;
//		int direction;
//		int score;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (board[i][j] == 0)
//				{
//					for (int k = 0; k < 4; k++)
//					{
//						currentX = i;
//						currentY = j;
//						startX = i;
//						startY = j;
//						direction = k;
//						score = 0;
//						start = false;
//						while (true)
//						{
//							//���� �ε������ (�ٿ���� �ٱ����� ������ ���) ó��
//							if (currentX < 0)
//							{
//								currentX++;
//								score++;
//								direction = 1;
//								continue;
//							}
//							if (currentX >= N)
//							{
//								currentX--;
//								score++;
//								direction = 0;
//								continue;
//							}
//							if (currentY < 0)
//							{
//								currentY++;
//								score++;
//								direction = 3;
//								continue;
//							}
//							if (currentY >= N)
//							{
//								currentY--;
//								score++;
//								direction = 2;
//								continue;
//							}
//
//							if (start == true) // ���ڸ��� ������ġ�� ����ġ�� ���Ƽ� ������ ���� ����
//							{
//								if ((currentX == startX && currentY == startY) || board[currentX][currentY] == -1)
//								{
//									if (score > Max)
//										Max = score;
//									break;
//								}
//							}
//							else start = true;
//
//							if (board[currentX][currentY] == 0)
//							{
//								if (direction == 0)
//								{
//									currentX--;
//									continue;
//								}
//								else if (direction == 1)
//								{
//									currentX++;
//									continue;
//								}
//								else if (direction == 2)
//								{
//									currentY--;
//									continue;
//								}
//								else if (direction == 3)
//								{
//									currentY++;
//									continue;
//								}
//							}
//							else if (board[currentX][currentY] == 1)
//							{
//								if (direction == 3)
//								{
//									currentY--;
//									score++;
//									direction = 2;
//									continue;
//								}
//								else if (direction == 0)
//								{
//									currentX++;
//									score++;
//									direction = 1;
//									continue;
//								}
//								else if (direction == 1)
//								{
//									currentY++;
//									score++;
//									direction = 3;
//									continue;
//								}
//								else if (direction == 2)
//								{
//									currentX--;
//									score++;
//									direction = 0;
//									continue;
//								}
//							}
//							else if (board[currentX][currentY] == 2)
//							{
//								if (direction == 0)
//								{
//									currentY++;
//									score++;
//									direction = 3;
//									continue;
//								}
//								else if (direction == 1)
//								{
//									currentX--;
//									score++;
//									direction = 0;
//									continue;
//								}
//								else if (direction == 2)
//								{
//									currentX++;
//									score++;
//									direction = 1;
//									continue;
//								}
//								else if (direction == 3)
//								{
//									currentY--;
//									score++;
//									direction = 2;
//									continue;
//								}
//							}
//							else if (board[currentX][currentY] == 3)
//							{
//								if (direction == 0)
//								{
//									currentY--;
//									score++;
//									direction = 2;
//									continue;
//								}
//								else if (direction == 1)
//								{
//									currentX--;
//									score++;
//									direction = 0;
//									continue;
//								}
//								else if (direction == 2)
//								{
//									currentY++;
//									score++;
//									direction = 3;
//									continue;
//								}
//								else if (direction == 3)
//								{
//									currentX++;
//									score++;
//									direction = 1;
//									continue;
//								}
//							}
//							else if (board[currentX][currentY] == 4)
//							{
//								if (direction == 0)
//								{
//									currentX++;
//									score++;
//									direction = 1;
//									continue;
//								}
//								else if (direction == 1)
//								{
//									currentY--;
//									score++;
//									direction = 2;
//									continue;
//								}
//								else if (direction == 2)
//								{
//									currentY++;
//									score++;
//									direction = 3;
//									continue;
//								}
//								else if (direction == 3)
//								{
//									currentX--;
//									score++;
//									direction = 0;
//									continue;
//								}
//							}
//							else if (board[currentX][currentY] == 5)
//							{
//								if (direction == 0)
//								{
//									currentX++;
//									score++;
//									direction = 1;
//									continue;
//								}
//								else if (direction == 1)
//								{
//									currentX--;
//									score++;
//									direction = 0;
//									continue;
//								}
//								else if (direction == 2)
//								{
//									currentY++;
//									score++;
//									direction = 3;
//									continue;
//								}
//								else if (direction == 3)
//								{
//									currentY--;
//									score++;
//									direction = 2;
//									continue;
//								}
//							}
//							else if (board[currentX][currentY] >= 6 && board[currentX][currentY] <= 10)
//							{
//								bool flag = false;
//								
//								for (int i = 0; i < N; i++)
//								{
//									for (int j = 0; j < N; j++)
//									{
//										if ((i != currentX || j != currentY) && board[currentX][currentY] == board[i][j])
//										{
//											if (direction == 0)
//											{
//												currentX = i - 1;
//												currentY = j;
//											}
//											else if (direction == 1)
//											{
//												currentX = i + 1;
//												currentY = j;
//											}
//											else if (direction == 2)
//											{
//												currentX = i;
//												currentY = j - 1;
//
//											}
//											else if (direction == 3)
//											{
//												currentX = i;
//												currentY = j + 1;
//											}
//											flag = true;
//											break;
//										}
//									}
//									if (flag)
//										break;
//								}
//								continue;
//							}
//						}
//					}
//				}
//			}
//		}
//		cout << "#" << tc << " " << Max << endl;
//		Max = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			delete[] board[i];
//		}
//		delete[] board;
//
//	}
//
//	return 0;
//}



// ���� �Ʒ��� ��ͷ� Ǯ� ���� ��ġ�� �ڵ�

//#include <iostream>
//
//using namespace std;
//
//int N;
//int Max = 0;
//bool start = false;
//
//void DFS(int **board, int currentX, int currentY, int startX, int startY, int score, int direction)
//{
//	//���� �ε������ (�ٿ���� �ٱ����� ������ ���) ó��
//	if (currentX < 0)
//	{
//		DFS(board, currentX + 1, currentY, startX, startY, score + 1, 1);
//		return;
//	}
//	if (currentX >= N)
//	{
//		DFS(board, currentX - 1, currentY, startX, startY, score + 1, 0);
//		return;
//	}
//	if (currentY < 0)
//	{
//		DFS(board, currentX, currentY + 1, startX, startY, score + 1, 3);
//		return;
//	}
//	if (currentY >= N)
//	{
//		DFS(board, currentX, currentY - 1, startX, startY, score + 1, 2);
//		return;
//	}
//
//	if (start == true) // ���ڸ��� ������ġ�� ����ġ�� ���Ƽ� ������ ���� ����
//	{
//		if ((currentX == startX && currentY == startY) || board[currentX][currentY] == -1)
//		{
//			if (score > Max)
//				Max = score;
//			return;
//		}
//	}
//	else start = true;
//
//	if (board[currentX][currentY] == 0)
//	{
//		if (direction == 0)
//		{
//			DFS(board, currentX - 1, currentY, startX, startY, score, direction);
//		}
//		else if (direction == 1)
//		{
//			DFS(board, currentX + 1, currentY, startX, startY, score, direction);
//		}
//		else if (direction == 2)
//		{
//			DFS(board, currentX, currentY - 1, startX, startY, score, direction);
//		}
//		else if (direction == 3)
//		{
//			DFS(board, currentX, currentY + 1, startX, startY, score, direction);
//		}
//	}
//	else if (board[currentX][currentY] == 1)
//	{
//		if (direction == 3)
//		{
//			DFS(board, currentX, currentY - 1, startX, startY, score + 1, 2);
//		}
//		else if (direction == 0)
//		{
//			DFS(board, currentX + 1, currentY, startX, startY, score + 1, 1);
//		}
//		else if (direction == 1)
//		{
//			DFS(board, currentX, currentY + 1, startX, startY, score + 1, 3);
//		}
//		else if (direction == 2)
//		{
//			DFS(board, currentX - 1, currentY, startX, startY, score + 1, 0);
//		}
//	}
//	else if (board[currentX][currentY] == 2)
//	{
//		if (direction == 0)
//		{
//			DFS(board, currentX, currentY + 1, startX, startY, score + 1, 3);
//		}
//		else if (direction == 1)
//		{
//			DFS(board, currentX - 1, currentY, startX, startY, score + 1, 0);
//		}
//		else if (direction == 2)
//		{
//			DFS(board, currentX + 1, currentY, startX, startY, score + 1, 1);
//		}
//		else if (direction == 3)
//		{
//			DFS(board, currentX, currentY - 1, startX, startY, score + 1, 2);
//		}
//	}
//	else if (board[currentX][currentY] == 3)
//	{
//		if (direction == 0)
//		{
//			DFS(board, currentX, currentY - 1, startX, startY, score + 1, 2);
//		}
//		else if (direction == 1)
//		{
//			DFS(board, currentX - 1, currentY, startX, startY, score + 1, 0);
//		}
//		else if (direction == 2)
//		{
//			DFS(board, currentX, currentY + 1, startX, startY, score + 1, 3);
//		}
//		else if (direction == 3)
//		{
//			DFS(board, currentX + 1, currentY, startX, startY, score + 1, 1);
//		}
//	}
//	else if (board[currentX][currentY] == 4)
//	{
//		if (direction == 0)
//		{
//			DFS(board, currentX + 1, currentY, startX, startY, score + 1, 1);
//		}
//		else if (direction == 1)
//		{
//			DFS(board, currentX, currentY - 1, startX, startY, score + 1, 2);
//		}
//		else if (direction == 2)
//		{
//			DFS(board, currentX, currentY + 1, startX, startY, score + 1, 3);
//		}
//		else if (direction == 3)
//		{
//			DFS(board, currentX - 1, currentY, startX, startY, score + 1, 0);
//		}
//	}
//	else if (board[currentX][currentY] == 5)
//	{
//		if (direction == 0)
//		{
//			DFS(board, currentX + 1, currentY, startX, startY, score + 1, 1);
//		}
//		else if (direction == 1)
//		{
//			DFS(board, currentX - 1, currentY, startX, startY, score + 1, 0);
//		}
//		else if (direction == 2)
//		{
//			DFS(board, currentX, currentY + 1, startX, startY, score + 1, 3);
//		}
//		else if (direction == 3)
//		{
//			DFS(board, currentX, currentY - 1, startX, startY, score + 1, 2);
//		}
//	}
//	else if (board[currentX][currentY] >= 6 && board[currentX][currentY] <= 10)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if ((i != currentX || j != currentY) && board[currentX][currentY] == board[i][j])
//				{
//					if (direction == 0)
//					{
//						DFS(board, i - 1, j, startX, startY, score, direction);
//					}
//					else if (direction == 1)
//					{
//						DFS(board, i + 1, j, startX, startY, score, direction);
//					}
//					else if (direction == 2)
//					{
//						DFS(board, i, j - 1, startX, startY, score, direction);
//					}
//					else if (direction == 3)
//					{
//						DFS(board, i, j + 1, startX, startY, score, direction);
//					}
//					return;
//				}
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N;
//		int **board = new int*[N];
//		for (int i = 0; i < N; i++)
//		{
//			board[i] = new int[N];
//			for (int j = 0; j < N; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (board[i][j] == 0)
//				{
//					for (int k = 0; k < 4; k++)
//					{// 0 - �� , 1 - ��, 2 - ��, 3 - ��
//						start = false;
//						DFS(board, i, j, i, j, 0, k);
//
//					}
//				}
//			}
//		}
//		cout << "#" << tc << " " << Max << endl;
//		Max = 0;
//
//	}
//
//	return 0;
//}