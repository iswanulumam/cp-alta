#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

inline string toup(string s)
{
	string tmp;
	for (string::iterator it = s.begin(); it<s.end(); it++)
		tmp.insert(tmp.end(), toupper(*it));
	return tmp;
}
int main() {	
	set<string> s;

	int n; string ss;
	cin >> n; getline(cin, ss);
	for(int i=0; i<n; i++)
	{
		getline(cin, ss);						
		ss=toup(ss);		
		s.insert(ss);
		int idx=1;		
		for (set<string>::iterator it=s.begin(); it!=s.end(); it++)
		{
			if (*it==ss)	
			{
				printf("%d\n", idx);
				break;
			}
			idx++;		
		}			
	}
}