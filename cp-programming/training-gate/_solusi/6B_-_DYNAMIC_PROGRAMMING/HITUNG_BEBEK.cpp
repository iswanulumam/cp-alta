#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define scanint(a) scanf("%d", &a);
#define debug(a) cerr << #a << '=' << a << endl;
#define reset(a, b) memset(a, b, sizeof(a))

int memo[1000001];
const int mod = 1000000;

int dp(int n) {
	if (n < 0)
		return 0;

	if (n == 1 || n == 0)
		memo[n] = 1;

	if (memo[n] == 0)
		memo[n] = (dp(n-1) % mod + dp(n-2) % mod) % mod;

	return memo[n];
}

int main() {
	reset(memo, 0);
	for (int i = 1; i <= 1000000; i++) dp(i);

	int n;
	scanint(n);
	printf("%d\n", memo[n]);
}