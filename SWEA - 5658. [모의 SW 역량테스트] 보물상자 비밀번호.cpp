//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int n, k;
//
//priority_queue<int> q;
//vector<int> v;
//
//void insert_q(string str, int amount)
//{
//	int *temp = new int[amount];
//
//	for (int i = 0; i < amount; i++)
//	{
//		switch (str[i])
//		{
//		case '0':
//		{
//			temp[i] = 0;
//			break;
//		}
//		case '1':
//		{
//			temp[i] = 1;
//			break;
//		}
//		case '2':
//		{
//			temp[i] = 2;
//			break;
//		}
//		case '3':
//		{
//			temp[i] = 3;
//			break;
//		}
//		case '4':
//		{
//			temp[i] = 4;
//			break;
//		}
//		case '5':
//		{
//			temp[i] = 5;
//			break;
//		}
//		case '6':
//		{
//			temp[i] = 6;
//			break;
//		}
//		case '7':
//		{
//			temp[i] = 7;
//			break;
//		}
//		case '8':
//		{
//			temp[i] = 8;
//			break;
//		}
//		case '9':
//		{
//			temp[i] = 9;
//			break;
//		}
//		case 'A':
//		{
//			temp[i] = 10;
//			break;
//		}
//		case 'B':
//		{
//			temp[i] = 11;
//			break;
//		}
//		case 'C':
//		{
//			temp[i] = 12;
//			break;
//		}
//		case 'D':
//		{
//			temp[i] = 13;
//			break;
//		}
//		case 'E':
//		{
//			temp[i] = 14;
//			break;
//		}
//		case 'F':
//		{
//			temp[i] = 15;
//			break;
//		}
//		}
//
//	}
//	int num = 0;
//	for (int i = 0; i < amount; i++)
//	{
//		num += pow(16, amount - i - 1) * temp[i];
//	}
//
//	int flag = true;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] == num)
//		{
//			flag = false;
//			break;
//		}
//	}
//	if (flag)
//	{
//		v.push_back(num);
//		q.push(num);
//	}
//
//	delete[] temp;
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int test_case = 1; test_case <= T; test_case++)
//	{
//		cin >> n >> k;
//
//		char *arr = new char[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//
//		int amount = n / 4; // 한 변에 들어가는 숫자의 수
//		
//		for (int k = 0; k < n; k++)
//		{
//			int t = arr[0];
//			for (int l = 0; l < n; l++)
//			{
//				if(l == n-1)
//					arr[l] = t;
//				else
//				{
//					arr[l] = arr[l + 1];
//				}
//			}
//
//			for (int i = 0; i < n-1; i += amount)
//			{
//				string str = "";
//				for (int j = i; j < i + amount; j++)
//				{
//					str += arr[j];
//				}
//				insert_q(str, amount);
//			}
//		}
//		for (int i = 0; i < k-1; i++)
//		{
//			q.pop();
//		}
//		cout << "#" << test_case << " " << q.top() << endl;
//
//		while (!q.empty())
//		{
//			q.pop();
//		}
//		v.clear();
//	}
//
//	return 0;
//}