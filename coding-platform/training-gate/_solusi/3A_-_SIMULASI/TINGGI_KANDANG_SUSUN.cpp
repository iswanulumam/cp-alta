#include <bits/stdc++.h>
 
typedef unsigned long long LLU;
typedef long long LL;
 
using namespace std;
 
int main()
{	
	LLU n, left, k, height=0, level;
	scanf("%llu %llu", &n, &k);

	left=n;
	if (n%k==0)	
		level = n/k+1;
	else
		level = n/k+2;
	
	for (LLU i=0; i<level; i++)
	{
		LLU maximum=0;
		for (long i=0; i<k; i++)
		{
			if (n==0)
				break;
			LLU x;
			scanf("%llu", &x);
			maximum = max(maximum, x);
			n--;
		}
		height += maximum;
	}
	height+=level;
	printf("%llu\n", height);
}