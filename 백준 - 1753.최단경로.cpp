//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int v, e, k;
//int *d;
//int INF = 1000000000;
//vector<pair<int, int>> *board;
//
//void dijkstra(int start)
//{
//	priority_queue<pair<int, int>> pq;
//	d[start] = 0;
//
//	pq.push(make_pair(start, 0));
//
//	while (!pq.empty())
//	{
//		int current = pq.top().first;
//		int distance = -pq.top().second;
//		pq.pop();
//
//		if (distance > d[current]) continue;
//
//		for (int i = 0; i < board[current].size(); i++)
//		{
//			int next = board[current][i].first;
//			int nextDistance = distance + board[current][i].second;
//
//			if (nextDistance < d[next])
//			{
//				d[next] = nextDistance;
//				pq.push(make_pair(next,-nextDistance));
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> v >> e >> k;
//	
//	d = new int[v + 1];
//	for (int i = 0; i < v + 1; i++)
//	{
//		d[i] = INF;
//	}
//	
//	board = new vector<pair<int, int>>[v + 1];
//	for (int i = 0; i < e; i++)
//	{
//		int node1, node2, weight;
//		cin >> node1 >> node2 >> weight;
//		board[node1].push_back(make_pair(node2, weight));
//	}
//
//	dijkstra(k);
//
//	for (int i = 1; i < v + 1; i++)
//	{
//		if (d[i] == INF)
//			printf("INF\n");
//		else printf("%d\n", d[i]);
//	}
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int v, e, k;
//int *d;
//bool *visit;
//int INF = 100000000;
//
//int getSmallIndex() 
//{
//	int min = INF;
//	int index;
//	for (int i = 1; i < v + 1; i++)
//	{
//		if (!visit[i] && min > d[i])
//		{
//			min = d[i];
//			index = i;
//		}
//	}
//	return index;
//	
//}
//int main()
//{
//	//scanf("%d%d%d", &v, &e, &k);
//	cin >> v >> e >> k;
//	d = new int[v + 1];
//	visit = new bool[v + 1];
//	int **board = new int*[v + 1];
//	for (int i = 0; i < v+1; i++) 
//	{
//		d[i] = INF;
//		visit[i] = false;
//		board[i] = new int[v + 1];
//		for (int j = 0; j < v + 1; j++)
//		{
//			board[i][j] = INF;
//		}
//	}
//
//	d[1] = 0;
//	visit[1] = true; //스타팅 노드 초기화
//
//	for (int i = 0; i < e; i++)
//	{
//		int node1, node2, weight;
//		//scanf("%d%d%d", &node1, &node2, &weight);
//		cin >> node1 >> node2 >> weight;
//		board[node1][node2] = weight;
//	}
//
//	for (int i = 1; i < v + 1; i++)
//	{
//		if(i != k)
//			d[i] = board[k][i];
//	}
//	for (int i = 0; i < v - 2; i++)
//	{
//		int current = getSmallIndex();
//		visit[current] = true;
//
//		for (int j = 1; j < v + 1; j++)
//		{
//			if (!visit[j] && d[j] > d[current] + board[current][j])
//				d[j] = d[current] + board[current][j];
//		}
//	}
//	
//	
//	for (int i = 1; i < v + 1; i++)
//	{
//		if (d[i] == INF)
//			printf("INF\n");
//		else printf("%d\n", d[i]);
//	}
//
//	for (int i = 0; i < v + 1; i++)
//	{
//		delete[] board[i];
//	}
//	delete[] board;
//	delete[] d;
//	delete[] visit;
//
//	return 0;
//}