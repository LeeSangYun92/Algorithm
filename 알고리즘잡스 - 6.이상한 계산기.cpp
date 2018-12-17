//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int BFS(int N, bool visit[])
//{
//	queue<int> q;
//	int count = 0;
//	q.push(1);
//	visit[1] = true;
//
//	while (!q.empty())
//	{
//		int qSize = q.size();
//		for (int i = 0; i < qSize; i++)
//		{
//			int value = q.front();
//			q.pop();
//			if (value == N)
//				return count;
//
//			int mul = value * 2;
//			int div = value / 3;
//			if (mul <= 99999)
//			{
//				if (visit[mul] == false)
//				{
//					q.push(mul);
//					visit[mul] = true;
//				}
//			}
//			
//			if (visit[div] == false)
//			{
//				q.push(div);
//				visit[div] = true;
//			}
//		}
//		count++;
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	bool visit[100000];
//	for (int i = 0; i < 100000; i++)
//	{
//		visit[i] = false; //거쳐가지 않은 숫자가 false
//	}
//
//	cout << BFS(N, visit) << endl;
//	return 0;
//}