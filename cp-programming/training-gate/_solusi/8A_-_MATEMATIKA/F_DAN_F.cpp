#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getn(ll x, ll a, ll b)  {
	return (x-a+b)/b;
}

ll sn(ll n, ll a, ll b) {
	return (ll)n*(2LL*a+(n-1)*b)/2LL;
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// #endif

	ll n;
	cin >> n;

	ll ans = 0;
	ll now = 1, prog = 2;

	while (now <= n) {
		// cout << sn(getn(n, now, prog), 1, 2) << endl;
		ans += sn(getn(n, now, prog), 1, 2);
		prog <<= 1LL;
		now <<= 1LL;
	}

	cout << ans << endl;
}