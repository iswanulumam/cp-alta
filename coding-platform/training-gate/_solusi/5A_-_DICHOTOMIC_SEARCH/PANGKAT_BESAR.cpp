#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

pair<LLU, bool> pangkat(long base, long exp)
{
	unsigned long long a = base, res=1;

	bool red=false;
	if (base%1000000==0)
		red = true;
	while (exp>0)
	{
		if (exp % 2 != 0)
		{
			res *= a;			
			if (res>999999)			
				red = true;			
			res %= 1000000;			
			exp-=1;			
		}
		a *= a;
		if (a>999999)			
			red = true;			
		a %= 1000000;
		exp/=2;
	}	
	return make_pair(res%1000000, red);
}

string addzeros(LLU a)
{
	string s;
	while(a>0)
	{
		s.insert(s.begin(), char((int)'0'+a%10));
		a/=10;
	}
	int x=s.length();
	for (int i=0; i<6-x; i++)	
		s.insert(s.begin(), '0');
	return s;	
}

int main() {	
	long a, b;
	cin >> a >> b;	
	pair<LLU, bool> res = pangkat(a, b);	
	if (res.second)
		cout << addzeros(res.first) << endl;
	else
		cout << res.first<<endl;
}