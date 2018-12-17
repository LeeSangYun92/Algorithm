//#include <iostream>
//#include <queue>
//
//using namespace std;
//int BFS(int N, int K, bool *visit)
//{
//	queue<int> q;
//	q.push(K);
//	visit[K] = true;
//
//	while (!q.empty())
//	{
//		int qSize = q.size();
//
//		for (int i = 0; i < qSize; i++)
//		{
//			int current = q.front();
//			q.pop();
//
//			int mul = current * 2;
//			int div = current / 3;
//
//			if (mul <= N && visit[mul] == false)
//			{
//				q.push(mul);
//				visit[mul] = true;
//			}
//			if (visit[div] == false)
//			{
//				q.push(div);
//				visit[div] = true;
//			}
//		}
//	}
//	int count = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		if (visit[i] == false)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//
//	bool *visit = new bool[N+1];
//	for (int i = 0; i < N+1; i++)
//		visit[i] = false;
//
//	cout << BFS(N, K, visit) << endl;
//	return 0;
//}