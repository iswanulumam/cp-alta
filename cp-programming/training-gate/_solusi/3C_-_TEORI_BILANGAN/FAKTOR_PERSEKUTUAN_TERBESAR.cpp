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
	int t;
	LLU x, y;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%llu %llu", &x, &y);
		printf("%llu\n", gcd(max(x,y), min(x,y)));
	}
}