#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

inline bool ispalindrome(string str)
{
	unsigned int head=0, tail=str.length()-1;
	while(tail>head)	
		if (str[head++]!=str[tail--])
			return false;
		
	return true;
}

int main()
{
	int t;
	string str;
	bool first = true;
	while (cin>>str)
	{			
		if (ispalindrome(str))
		{	
			if (first==false) cout << ' ';				
			cout << str;	
			first = false;
		}
		
	}
	cout << endl;
}