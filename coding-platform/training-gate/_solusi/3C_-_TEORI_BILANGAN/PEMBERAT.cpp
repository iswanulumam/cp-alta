#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;


int main()
{   
	LLU b, k, x=1;	
	x <<= 63;	
	cin >> b >> k;

	for (int i=63; i>-1; i--, x>>=1)	
		if (((k-b) & x) != 0)								
			printf("%llu\n", x);						
}