#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

inline LLU sum(LLU start, LLU count)
{
	return (count*(start+(start+(count-1)*start)))/2;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		LLU n, s4, s7, s28, ans;
		scanf("%llu", &n);
		s4 = sum(4, n/4);
		s7 = sum(7, n/7);
		s28 = sum(28, n/28);
		ans = s4+s7-s28;
		printf("%llu\n", ans);        
	}
}