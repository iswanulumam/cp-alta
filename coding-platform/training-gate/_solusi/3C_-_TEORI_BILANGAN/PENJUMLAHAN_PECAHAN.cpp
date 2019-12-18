#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;

LLU gcd(LLU a, LLU b)
{	
	if (b==0)
		return a;
	return gcd(b, a%b);
}

int main()
{   
	LLU a, b, c, d, e, f, g;
	/*
		a   c   e   ad+cb
		- + - = - = -----
		b   d   f    bd
	*/
	cin >> a >> b >> c >> d;
	e = a*d+c*b;
	f = b*d;
	g = gcd(max(e,f), min(e, f));
	cout << e/g << ' ' << f/g << endl;
}