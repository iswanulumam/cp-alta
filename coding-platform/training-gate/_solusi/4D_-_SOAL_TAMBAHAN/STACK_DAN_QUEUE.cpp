#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {
	deque<int> d;
	int n;
	cin >> n;	
	while(n--)
	{
		string s; int x;
		cin >> s;
		if (s!="pop_back" && s!="pop_front") cin >> x;
		if (s=="push_back")
			d.push_back(x);
		else if (s=="push_front")
			d.push_front(x);
		else if (s=="pop_back")
			d.pop_back();
		else if (s=="pop_front")
			d.pop_front();		
	}
	for (deque<int>::iterator it=d.begin(); it!=d.end(); it++)
		cout << *it << endl;
}