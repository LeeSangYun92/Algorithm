//#pragma warning (disable:4996)
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int binarySearch(int *arr,int size,int target)
//{
//	int first = 0;
//	int last = size - 1;
//	while (first <= last )
//	{
//		int mid = (first + last) / 2;
//		if (arr[mid] == target)
//			return 1;
//		else if(arr[mid] < target)
//		{
//			first = mid+1;
//		}
//		else if (arr[mid] > target)
//		{
//			last = mid-1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	int m;
//
//	scanf("%d", &n);
//	int *arr = (int*)malloc(sizeof(int)*n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	sort(arr, arr+n);
//
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		int target;
//		scanf("%d", &target);
//		printf("%d\n",binarySearch(arr,n,target));
//	}
//}