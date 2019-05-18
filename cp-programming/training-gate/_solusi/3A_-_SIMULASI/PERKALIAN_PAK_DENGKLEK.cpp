#include <bits/stdc++.h>

typedef unsigned long long LLU;
typedef long long LL;

using namespace std;

int main()
{
	LLU a, b, x, y, sum=0;
	cin >> a >> b;
	x = max(a, b);	
	while (x>0)
	{
		y = min(a, b);

		LLU tmp = x%10;
		x /= 10;
		while (y>0)
		{
			// cout << tmp << '*' << y%10 << "=" <<  << endl;
			sum+=tmp*(y%10);
			y/=10;
		}		
	}
	cout << sum << endl;
}