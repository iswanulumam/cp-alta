#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

int main() {	
	ll n, b;
	int h_bebek[20001];

	scanf("%lld %lld", &n, &b);

	for (int i = 0; i < n; i++) {
		long x;
		scanf("%d", &h_bebek[i]);	
	}

	sort(h_bebek, h_bebek+n);

	ll s = 0, count = 0;

	for (int i = n-1; i >= 0; i--) {
		s += h_bebek[i];
		count++;

		if (s > b)
			break;
	}

	printf("%lld\n", count);
}