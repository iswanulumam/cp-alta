#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {	
	int n;
	scanf("%d", &n);
	while(n--)
	{
		long x;
		scanf("%ld", &x);		
		printf("%s\n", (x%6!=0 ? "YA" : "TIDAK"));
	}
}