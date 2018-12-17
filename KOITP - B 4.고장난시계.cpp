//#include <iostream>
//
//using namespace std;
//
//int **s_time;
//
//int* check_s_time(int **t)
//{
//	int temp[4];
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 1 && t[i][3] == 1 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 0)
//			temp[i] = 0;
//		else if(t[i][0] == 0 && t[i][1] == 0 && t[i][2] == 0 && t[i][3] == 0 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 0)
//			temp[i] = 1;
//		else if (t[i][0] == 1 && t[i][1] == 0 && t[i][2] == 1 && t[i][3] == 1 && t[i][4] == 0 && t[i][5] == 1 && t[i][6] == 1)
//			temp[i] = 2;
//		else if (t[i][0] == 1 && t[i][1] == 0 && t[i][2] == 0 && t[i][3] == 1 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 1)
//			temp[i] = 3;
//		else if (t[i][0] == 0 && t[i][1] == 1 && t[i][2] == 0 && t[i][3] == 0 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 1)
//			temp[i] = 4;
//		else if (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 0 && t[i][3] == 1 && t[i][4] == 1 && t[i][5] == 0 && t[i][6] == 1)
//			temp[i] = 5;
//		else if (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 1 && t[i][3] == 1 && t[i][4] == 1 && t[i][5] == 0 && t[i][6] == 1)
//			temp[i] = 6;
//		else if (t[i][0] == 1 && t[i][1] == 0 && t[i][2] == 0 && t[i][3] == 0 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 0)
//			temp[i] = 7;
//		else if (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 1 && t[i][3] == 1 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 1)
//			temp[i] = 8;
//		else if (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 0 && t[i][3] == 1 && t[i][4] == 1 && t[i][5] == 1 && t[i][6] == 1)
//			temp[i] = 9;
//		else temp[i] = -1;
//	}
//	int *result = new int[2];
//	if (temp[0] != -1 && temp[1] != -1 && temp[2] != -1 && temp[3] != -1)
//	{
//		result[0] = temp[0] * 10 + temp[1];
//		result[1] = temp[2] * 10 + temp[3];
//	}
//	else {
//		result[0] = 99;
//		result[1] = 99;
//	}
//	
//	return result;
//}
//
//int main()
//{
//	int n;
//	int **input = new int*[4];
//	for (int i = 0; i < 4; i++)
//		input[i] = new int[7];
//	
//	int *t = new int[2];
//
//	s_time = new int*[3];
//	for (int i = 0; i < 3; i++)
//	{
//		s_time[i] = new int[2];
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			s_time[i][j] = 60;
//		}
//	}
//
//	cin >> n;
//	for (int test = 0; test < n; test++)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 7; j++)
//			{
//				cin >> input[i][j];
//			}
//		}
//		t = check_s_time(input);
//
//		s_time[0][0] = t[0];
//		s_time[0][1] = t[1]; //고장난 세그먼트가 없을 때
//
//		for (int i = 0; i < 4; i++)  // 세그먼트가 하나 일 때
//		{
//			for (int j = 0; j < 7; j++)
//			{
//				if (input[i][j] == 0)
//					input[i][j] = 1;
//				else input[i][j] = 0;
//
//				t = check_s_time(input);
//
//				if (t[0] < 60 && t[1] < 60 && t[0] < s_time[1][0])
//				{
//					s_time[1][0] = t[0];
//					s_time[1][1] = t[1];
//				}
//				else if (t[0] < 60 && t[1] < 60 && t[0] == s_time[1][0])
//				{
//					if ( t[1] < s_time[1][1])
//					{
//						s_time[1][0] = t[0];
//						s_time[1][1] = t[1];
//					}
//				}
//
//				if (input[i][j] == 0) //시간 다시 되돌려놓기
//					input[i][j] = 1;
//				else input[i][j] = 0;
//			}
//		}
//		
//		for (int i = 0; i < 4; i < i++) // 고장난 세그먼트가 둘 일때
//		{
//			for (int j = 0; j < 7; j++)
//			{
//				if (input[i][j] == 0) 
//					input[i][j] = 1;
//				else input[i][j] = 0;
//				
//				for (int k = 0; k < 4; i < k++) 
//				{
//					for (int l = 0; l < 7; l++)
//					{
//						if (input[k][l] == 0)
//							input[k][l] = 1;
//						else input[k][l] = 0;
//
//						t = check_s_time(input);
//
//						if (t[0] < 60 && t[1] < 60 && t[0] < s_time[2][0])
//						{
//							s_time[2][0] = t[0];
//							s_time[2][1] = t[1];
//
//							//cout << s_time[2][0] << " " << s_time[2][1] << endl;
//							//for (int q = 0; q < 4; q++)
//							//{
//							//	for (int w = 0; w < 7; w++)
//							//	{
//							//		cout << input[q][w] << " ";
//							//	}
//							//}
//							//cout << endl;
//						}
//						else if (t[0] < 60 && t[1] < 60 && t[0] == s_time[2][0])
//						{
//							if (t[1] < s_time[2][1])
//							{
//								s_time[2][0] = t[0];
//								s_time[2][1] = t[1];
//							}
//
//							//cout << s_time[2][0] << " " << s_time[2][1] << endl;
//							//for (int q = 0; q < 4; q++)
//							//{
//							//	for (int w = 0; w < 7; w++)
//							//	{
//							//		cout << input[q][w] << " ";
//							//	}
//							//}
//							//cout << endl;
//						}
//
//						if (input[k][l] == 0)
//							input[k][l] = 1;
//						else input[k][l] = 0;
//					}
//				}
//
//				if (input[i][j] == 0) //시간 다시 되돌려놓기
//					input[i][j] = 1;
//				else input[i][j] = 0;
//			}
//		}
//		for (int i = 1; i < 3; i++)
//		{
//			if (s_time[0][0] > s_time[i][0])
//			{
//				s_time[0][0] = s_time[i][0];
//				s_time[0][1] = s_time[i][1];
//			}
//			else if (s_time[0][0] == s_time[i][0])
//			{
//				if (s_time[0][1] > s_time[i][1])
//				{
//					s_time[0][0] = s_time[i][0];
//					s_time[0][1] = s_time[i][1];
//				}
//			}
//		}
//		cout << "#" << test + 1 << " " << s_time[0][0] << " " << s_time[0][1] << endl;
//
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				s_time[i][j] = 60;
//			}
//		}
//	}
//
//	return 0;
//}