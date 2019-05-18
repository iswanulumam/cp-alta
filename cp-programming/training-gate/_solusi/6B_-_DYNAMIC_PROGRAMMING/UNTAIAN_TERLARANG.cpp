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

pair<llu, llu> dp[30];
int main() {
	ios_base::sync_with_stdio(false);	

	dp[0] = mp(3, 0);
	dp[1] = mp(9, 0);
	
	llu p3 = 27;	
	for (int i = 2; i < 30; i++) {
		dp[i].sc = dp[i-1].sc * 3 + (dp[i-1].fs - dp[i-2].fs);

		dp[i].fs = p3 -  dp[i].sc;

		p3 *= 3;

		// cout << dp[i].fs << ' ' << dp[i].sc << endl;
	}

	int n;
	cin >> n;

	cout << dp[n-1].fs << endl;
}