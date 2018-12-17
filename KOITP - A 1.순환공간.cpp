/*
#include <iostream>

using namespace std;

int cal(int r1, int r2, int c1, int c2)
{
	int result = 0;

	if (r1 < c1)
	{
		result = result + (c1 - r1);
	}
	else result = result + (r1 - c1);

	if (r2 < c2)
	{
		result = result + (c2 - r2);
	}
	else result = result + (r2 - c2);

	return result;
}
int main()
{
	int n;
	cin >> n;
	int N, M;
	int r1, r2;
	int c1, c2;
	int result[9];

	for (int test = 0; test < n; test++)
	{
		cin >> N >> M >> r1 >> r2 >> c1 >> c2;

		int solution = result[0] = cal(r1, r2, c1, c2);
		result[1] = cal(r1 + N, r2, c1, c2);
		result[2] = cal(r1, r2 + M, c1, c2);
		result[3] = cal(r1 + N, r2 + M, c1, c2);
		result[4] = cal(r1 - N, r2, c1, c2);
		result[5] = cal(r1, r2 - M, c1, c2);
		result[6] = cal(r1 - N, r2 - M, c1, c2);
		result[7] = cal(r1 + N, r2 - M, c1, c2);
		result[8] = cal(r1 - N, r2 + M, c1, c2);

		for (int i = 0; i < 9; i++)
		{
			if (solution > result[i])
			{
				solution = result[i];
			}
		}

		//for (int i = 0; i < 11; i++)
		//	cout << result[i] << endl;
		cout << "#" << test + 1<< " " << solution << endl;

	}

	return 0;
}
*/