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

int ans = 0, memo[50][50];
string s;

int f(int l, int r) {
	// cout << l << ' ' << r <<endl;
	if (l > r) return 0;

	if (memo[l][r] == -1) {
		if (l == r) return memo[l][r] = 1;
	
		if (s[l] == s[r])
			return memo[l][r] = 2 + f(l+1, r-1);	
		else
			return memo[l][r] = max(f(l+1, r), f(l, r-1));
	} else {
		return memo[l][r];
	}
}

int main() {
	ios_base::sync_with_stdio(false);	

	int t;
	cin >> t;
	

	while (t--) {
		cin >> s;
		
		reset(memo, -1);
		ans = 0;

		cout << f(0, s.length()-1) << endl;
	}
}