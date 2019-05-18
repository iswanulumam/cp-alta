#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main(){
	LLU x, maxp=1;	

	cin >> x;	
	while(x > maxp)	
		maxp *= 3;

	vector<LLU> v;

	while(x>0)
	{
		if (x>=maxp)
		{
			for (int i=0; i<x/maxp; i++)
				v.push_back(maxp);
			// v.push_back(x/maxp*maxp);				
			x%=maxp;
		}
		maxp/=3;
	}

	cout << v.end()-v.begin() << endl;
	bool first=true;
	for (vector<LLU>::iterator it=v.end()-1; it>=v.begin(); --it)
	{
		if (!first)
			cout << ' ';
		cout << *it;	
		first = false;
	}

	cout << endl;
}