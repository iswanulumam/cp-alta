#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main()
{
	int k, pos=0;
	const int pecahan[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	scanf("%d", &k);
	while(k>0)
	{
		if (k >= pecahan[pos])
		{
			printf("%d %d\n", pecahan[pos], k/pecahan[pos]);
			k %= pecahan[pos];
		}
		pos++;		
	}	
}