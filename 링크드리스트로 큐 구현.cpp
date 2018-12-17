//#pragma warning (disable:4996)
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct NODE {
//	int data;
//	struct NODE *next;
//};
//
//struct NODE *head;
//
//void insertToTail(int x)
//{
//	struct NODE *node = (struct NODE*)malloc(sizeof(struct NODE));
//
//	if (head->next == NULL)
//	{
//		head->next = node;
//		node->next = NULL;
//		node->data = x;
//	}
//	else
//	{
//		struct NODE *ptr;
//		ptr = head;
//
//		while (ptr->next != NULL)
//		{
//			ptr = ptr->next;
//		}
//		ptr->next = node;
//		node->next = NULL;
//		node->data = x;
//	}
//}
//
//void push(int x)
//{
//	insertToTail(x);
//}
//void empty()
//{
//	if (head->next == NULL)
//		printf("1\n");
//	else printf("0\n");
//}
//
//void pop()
//{
//	if (head->next != NULL)
//	{
//		printf("%d\n", head->next->data);
//		head->next = head->next->next;
//	}
//	else
//		printf("-1\n");
//	
//}
//void size()
//{
//	int count = 0;
//	struct NODE *ptr;
//
//	ptr = head;
//
//	while (ptr->next != NULL)
//	{
//		ptr = ptr->next;
//		count++;
//	}
//	printf("%d\n", count);
//} 
//
//
//void front()
//{
//	printf("%d\n", head->next->data);
//}
//void back()
//{
//	struct NODE *ptr = head;
//
//	while (ptr->next != NULL)
//	{
//		ptr = ptr->next;
//	}
//	printf("%d\n", ptr->data);
//}
//
//
//int main()
//{
//	head = (struct NODE*)malloc(sizeof(struct NODE));
//	head->data = NULL;
//	head->next = NULL;
//
//	int n;
//	char command[100];
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", command);
//
//		if (strcmp(command,"push") == 0)
//		{
//			int value;
//			scanf("%d", &value);
//			push(value);
//		}
//		else if (strcmp(command,"pop")==0)
//		{
//			pop();
//		}
//		else if (strcmp(command,"front") == 0)
//		{
//			front();
//		}
//		else if (strcmp(command,"back") == 0)
//		{
//			back();
//		}
//		else if (strcmp(command,"empty") == 0)
//		{
//			empty();
//		}
//		else if (strcmp(command,"size") == 0)
//		{
//			size();
//		}
//	}
//	
//	return 0;
//}