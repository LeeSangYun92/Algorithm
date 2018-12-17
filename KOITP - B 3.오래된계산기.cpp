#include <iostream>
#include <algorithm>
#include <cstring> 
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	int N;
	long long int sum = 0;
	cin >> n;

	for (int test = 0; test < n; test++)
	{
		scanf("%d", &N);

		int *num = new int[N];
		
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 1; j < N - i; j++)
			{
				if (num[0] > num[j])
				{
					int temp = num[0];
					num[0] = num[j];
					num[j] = temp;
				}
			}
			for (int j = 2; j < N - i; j++)
			{
				if (num[1] > num[j])
				{
					int temp = num[1];
					num[1] = num[j];
					num[j] = temp;
				}
			}
			
			//sort(num, num + N - i);

			sum += num[0] = num[0] + num[1];

			memmove(num + 1, num + 2, sizeof(int)*(N - 2));
		}

		cout << "#" << test + 1 << " " << sum << endl;

		delete[] num;

		sum = 0;
	}
	return 0;
}

//int main()
//{
//	int n;
//	int N;
//	long long int sum = 0;
//	cin >> n;
//
//	for (int test = 0; test < n; test++)
//	{
//		cin >> N;
//
//		int **num = new int*[N];
//		//for (int i = 0; i < N; i++)
//		//{
//		//	num[i] = new int[N - i];
//		//}
//		num[0] = new int[N];
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> num[0][i];
//		}
//		
//		for (int i = 0; i < N-1 ; i++)
//		{
//			num[i + 1] = new int[N - i -1];
//			sort(num[i], num[i] + N-i);
//
//			sum += num[i+1][0] = num[i][0] + num[i][1];
//			
//			if (i < N - 2)
//			{/*
//				for (int j = 2; j < N-i; j++)
//					num[i + 1][j - 1] = num[i][j];*/
//				memcpy(num[i + 1]+1, num[i]+2, sizeof(int)*(N-2-i));
//			}
//			else {
//				num[i + 1][1] = num[i][2];
//			}
//			
//			delete[] num[i];
//		}
//		//for (int i = 0; i < N; i++)
//		//{
//		//	for (int j = 0; j < N-i; j++)
//		//	{
//		//		cout << num[i][j] << " ";
//		//	}
//		//	cout << endl;
//		//}	
//		
//		cout << "#" << test + 1 << " " << sum << endl;
//
//		/*for (int i = 0; i < N; i++)
//		{
//			delete[] num[i];
//		}*/
//		delete[] num[N-1];
//		delete[] num;
//
//		sum = 0;
//	}
//	return 0;
//}