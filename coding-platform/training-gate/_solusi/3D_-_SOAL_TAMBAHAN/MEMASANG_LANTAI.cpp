#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int mod = 1000000;

int main() {	
	int n=0;
	LLU arr[1000] = {1, 1, 2};
	for (int i=3; i<1000; i++)	
	{
		arr[i] = arr[i-1]+arr[i-3];
		arr[i] %= mod;
	}
	scanf("%d", &n);	
	printf("%llu\n", arr[n-1]);
}
