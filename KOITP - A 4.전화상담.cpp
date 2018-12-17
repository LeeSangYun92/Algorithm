#include <iostream>

using namespace std;

int max_score = 0;
int N, K, L;
int **n;

void solution(int l, int s, int order)
{
	if (order >= N)
		return;

	if (l < K)
	{
		//cout << s << endl;
		if (s > max_score)
			max_score = s;

		return;
	}

	if (l > n[order][0] && l < 2 * K)//남은 시간을 다 채울수 없을 경우
	{ 
		//cout << "oooooo" << endl;
		return;
	}
	
	if (l == n[order][0])
	{
		solution(0, s + 10, order + 1);
	}
	else {
		for (int i = 0; i <= n[order][0] - K; i++)
		{
			if ((l - (K + i)) >= 0)
				solution(l - (K + i), s + 10 - (n[order][1] * (n[order][0] - K - i)), order + 1);
		}
	}
	
}
int main()
{
	int test_case;

	cin >> test_case;

	for (int test = 0; test < test_case; test++)
	{
		cin >> N >> K >> L;

		n = new int*[N];

		for (int i = 0; i < N; i++)
		{
			n[i] = new int[2];
			cin >> n[i][0] >> n[i][1];
		}

		solution(L, 0, 0);

		cout << "#" << test + 1 << " " << max_score << endl;
		
		for (int i = 0; i < N; i++)
		{
			delete[] n[i];
		}
		delete[] n;

		max_score = 0;
	}

	return 0;
}
