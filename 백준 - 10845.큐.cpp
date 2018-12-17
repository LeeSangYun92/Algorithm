#include <iostream>
#include <string>

using namespace std;

int queue[10001];
int first = 0;
int last = -1;

void push(int data)
{
	queue[++last] = data;
}
void pop()
{
	if (last > -1 )
	{
		cout << queue[first] << endl;
		queue[first] = -1;
		if (first == last)
		{
			last = -1;
			first = 0;
		}
		else first++;
	}
	else cout << "-1" << endl;
}
void size()
{
	cout << last - first + 1 << endl;
}
void empty()
{
	if (last == -1)
		cout << "1" << endl;
	else cout << "0" << endl;
}
void  front()
{
	if (last == -1)
		cout << "-1" << endl;
	else cout << queue[first] << endl;
}
void back()
{
	if (last == -1)
		cout << "-1" << endl;
	else cout << queue[last] << endl;
}
int main()
{
	int time = 0;
	int data;
	string command;
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
		else if (command == "front")
		{
			front();
			time--;
		}
		else if (command == "back")
		{
			back();
			time--;
		}	
	}

	return 0;
}