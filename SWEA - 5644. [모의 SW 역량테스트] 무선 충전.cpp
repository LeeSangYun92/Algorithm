//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int M, A;
//vector < pair<int, int> > v1;
//vector < pair<int, int> > v2;
//struct BC {
//	int x, y;
//	int C;
//	int P;
//};
//struct BC *bc;
//int gridyChoice(bool *c1, bool *c2)
//{
//	int sum = 0;
//	for (int i = 0; i < A; i++)
//	{
//		for (int j = 0; j < A; j++)
//		{
//			if (c1[i] == true && c2[j] == true)
//			{
//				int temp_sum = 0;
//				if (i == j)
//					temp_sum = (bc[i].P + bc[j].P) / 2;
//				else
//					temp_sum = bc[i].P + bc[j].P;
//
//				if (sum < temp_sum)
//					sum = temp_sum;
//			}
//			else if (c1[i] == true && c2[j] == false)
//			{
//				int temp_sum = bc[i].P;
//				if (sum < temp_sum)
//					sum = temp_sum;
//			}
//			else if (c1[i] == false && c2[j] == true)
//			{
//				int temp_sum = bc[j].P;
//				if (sum < temp_sum)
//					sum = temp_sum;
//			}
//		}	
//	}
//	return sum;
//}
//bool capacity(int x, int y, int bcNum)
//{
//	if (abs(x - bc[bcNum].x) + abs(y - bc[bcNum].y) <= bc[bcNum].C)
//	{
//		return true;
//	}
//	return false;
//}
//void insert_move(int *user1, int *user2)//user ������ vector�� ���
//{
//	v1.push_back(make_pair(1, 1));
//	v2.push_back(make_pair(10, 10));
//
//	for (int i = 1; i <= M; i++)
//	{
//		int move1 = user1[i];
//		int move2 = user2[i];
//
//		if (move1 == 0) // �̵� x
//		{
//			v1.push_back(make_pair(v1[i-1].first,v1[i-1].second));
//		}
//		else if (move1 == 1) //�� -> ��
//		{
//			v1.push_back(make_pair(v1[i - 1].first, v1[i - 1].second - 1));
//		}
//		else if (move1 == 2) //�� -> ��
//		{
//			v1.push_back(make_pair(v1[i - 1].first + 1, v1[i - 1].second));
//		}
//		else if (move1 == 3) //�� -> ��
//		{
//			v1.push_back(make_pair(v1[i - 1].first, v1[i - 1].second + 1));
//		}
//		else if (move1 == 4) //�� -> ��
//		{
//			v1.push_back(make_pair(v1[i - 1].first - 1, v1[i - 1].second));
//		}
//
//		if (move2 == 0) // �̵� x
//		{
//			v2.push_back(make_pair(v2[i - 1].first, v2[i - 1].second));
//		}
//		else if (move2 == 1) //�� -> ��
//		{
//			v2.push_back(make_pair(v2[i - 1].first, v2[i - 1].second - 1));
//		}
//		else if (move2 == 2) //�� -> ��
//		{
//			v2.push_back(make_pair(v2[i - 1].first + 1, v2[i - 1].second));
//		}
//		else if (move2 == 3) //�� -> ��
//		{
//			v2.push_back(make_pair(v2[i - 1].first, v2[i - 1].second + 1));
//		}
//		else if (move2 == 4) //�� -> ��
//		{
//			v2.push_back(make_pair(v2[i - 1].first - 1, v2[i - 1].second));
//		}
//	}
//
//}
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int test_case = 1; test_case <= T; test_case++)
//	{
//		int sum = 0;
//		cin >> M >> A;
//		int *user1 = new int[M + 1];
//		int *user2 = new int[M + 1];
//		for (int i = 1; i <= M; i++)
//		{
//			cin >> user1[i];
//		}
//		for (int i = 1; i <= M; i++)
//		{
//			cin >> user2[i];
//		}
//		insert_move(user1, user2);
//	
//		bc = new struct BC[A];
//		for (int i = 0; i < A; i++)
//		{
//			cin >> bc[i].x >> bc[i].y >> bc[i].C >> bc[i].P;
//		}
//
//		bool *capacity1 = new bool[A];
//		bool *capacity2 = new bool[A];
//
//		for (int i = 0; i <= M; i++)
//		{
//			for (int j = 0; j < A; j++) // bc�� ����� �ȿ� �ִ��� �˻��Ͽ� bool �迭�� ����
//			{
//				capacity1[j] = capacity(v1[i].first, v1[i].second, j);
//				capacity2[j] = capacity(v2[i].first, v2[i].second, j);
//			}
//			sum += gridyChoice(capacity1,capacity2);
//		}	
//
//		cout << "#" << test_case << " " << sum << endl;
//
//		delete[] capacity1;
//		delete[] capacity2;
//		delete[] user1;
//		delete[] user2;
//		delete[] bc;
//		v1.clear();
//		v2.clear();
//	}
//
//	return 0;
//}