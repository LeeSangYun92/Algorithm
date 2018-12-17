//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	bool start = false;
//	for (int i = 0; i < 32; i++)
//	{
//		int b = (N >> (31 - i)) & 1;
//		if (b == 1)
//			start = 1;
//		if(start)
//			cout << b;
//	}
//	cout << endl;
//	return 0;
//}