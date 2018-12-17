//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void swap(char* a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void dfs(char *arr, int n, int r, int time, string result, int *visit)
//{
//	if (time == r)
//	{
//		cout << result << endl;
//		return;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (visit[i] != 1)
//		{
//			visit[i] = 1;
//			dfs(arr, n, r, time + 1, result + arr[i], visit);
//			visit[i] = 0;
//		}
//
//	}
//}
//
//int main()
//{
//	char arr[26];
//	arr[0] = 'a';
//	arr[1] = 'b';
//	arr[2] = 'c';
//	arr[3] = 'd';
//	arr[4] = 'e';
//	arr[5] = 'f';
//	arr[6] = 'g';
//	arr[7] = 'h';
//	arr[8] = 'i';
//	arr[9] = 'j';
//	arr[10] = 'k';
//	arr[11] = 'l';
//	arr[12] = 'm';
//	arr[13] = 'n';
//	arr[14] = 'o';
//	arr[15] = 'p';
//	arr[16] = 'q';
//	arr[17] = 'r';
//	arr[18] = 's';
//	arr[19] = 't';
//	arr[20] = 'u';
//	arr[21] = 'v';
//	arr[22] = 'w';
//	arr[23] = 'x';
//	arr[24] = 'y';
//	arr[25] = 'z';
//
//	int n, r;
//	int visit[26] = { 0 };
//	cin >> n >> r;
//
//	dfs(arr, n, r, 0, "", visit);
//
//	return 0;
//}