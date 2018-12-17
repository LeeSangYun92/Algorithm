//#pragma warning (disable:4996)
//#include <stdio.h>
//
//char* stringCopy(char *s, char *d)
//{
//	int i = 0;
//	int count = 0;
//	while (true)
//	{
//		if (s[i] == NULL)
//		{
//			break;
//		}
//		else {
//			d[i] = s[i];
//			count++;
//		}
//		i++;
//	}
//	printf("count : %d\n", count);
//	return d;
//}
//int main()
//{
//	char source[100];
//	char dest[100] = { NULL };
//
//	scanf("%s", source);
//
//	stringCopy(source, dest);
//
//	printf("input : %s\n", source);
//	printf("copy  : %s\n",dest);
//
//	return 0;
//}