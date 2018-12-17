#include <iostream>
#include <string>

using namespace std;

int stack[10001];
int top_num = -1;

void push(int data)
{
	stack[++top_num] = data;
}
void pop()
{
	if (top_num > -1)
	{
		cout << stack[top_num] << endl;
		stack[top_num--] = -1;
	}
	else cout << top_num << endl;
}
void size()
{
	cout << top_num+1 << endl;
}
void empty()
{
	if (top_num == -1)
		cout << "1" << endl;
	else cout << "0" << endl;
}
void top()
{
	if (top_num == -1)
	{
		cout << "-1"<< endl;
	}
	else cout << stack[top_num] << endl;
}
int main()
{
	int time = 0;
	int data = 0;
	string command;

	for (int i = 0; i < 10001; i++) //스택 -1로 초기화
	{
		stack[i] = -1;
	}

	cin >> time;

	while (time > 0)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> data;
			push(data);
			time--;
		}
		else if (command == "pop")
		{
			pop();
			time--;
		}
		else if (command == "size")
		{
			size();
			time--;
		}
		else if (command == "empty")
		{
			empty();
			time--;
		}
		else if (command == "top")
		{
			top();
			time--;
		}
		else cout << "잘못된 명령어 입니다."<<endl;
	}
	return 0;
}