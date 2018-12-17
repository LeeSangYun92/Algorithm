//#include <iostream>
//
//using namespace std;
//int gcd(int a, int b)
//{
//	int n;
//	while (true)
//	{
//		n = a % b;
//		if (n == 0)
//			return b;
//		else {
//			a = b;
//			b = n;
//		}
//	}
//}
//int lcm(int a, int b) 
//{
//	return a*b / gcd(a, b);
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//
//
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	cout << gcd(a, b) << endl;
//	cout << lcm(a, b) << endl;
//
//	return 0;
//}