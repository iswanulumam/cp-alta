#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		unsigned long long n, sum;
		scanf("%llu", &n);		
		LLU sqn = n*n, count = (sqn*(1+sqn))/(2*n);
		printf("%llu\n", count);
	}
}
