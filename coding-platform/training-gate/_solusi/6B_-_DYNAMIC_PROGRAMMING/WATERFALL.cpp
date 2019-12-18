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

bool waterfall[501][500];
ll memo[501][500];
int v, h, n;

ll dp(int y, int x, int dir) {
	if (memo[y][x] != -1)
		return memo[y][x];

	if (y == v || x == -1 || x == h)
		return 0;

	if (waterfall[y+1][x]) {
		if (dir == 0) {
			memo[y][x] = 1 + dp(y, x-1, -1) + dp(y, x+1, 1);
			for (int i = x; i >= 0; i--)
				if (waterfall[y+1][i])
					memo[y][i] = memo[y][x];
				else
					break;
			for (int i = x; i < h; i++)
				if (waterfall[y+1][i])
					memo[y][i] = memo[y][x];
				else
					break;
		}
		else
			memo[y][x] = dp(y, x+dir, dir);
	} else
		memo[y][x] = dp(y+1, x, 0);
	return memo[y][x];
}

void paint(int y1, int x1, int y2, int x2) {
	for (int i = y1; i <= y2; i++)
		for (int j = x1; j <= x2; j++)
			waterfall[i][j] = true;
}

void load() {
	reset(waterfall, false);
	reset(memo, -1);

	scanf("%d %d %d", &v, &h, &n);

	for (int i = 0; i < n; i++) {
		int v1, h1, v2, h2;
		scanf("%d %d %d %d", &v1, &h1, &v2, &h2);
		paint(v1, h1-1, v2, h2-1);
	}
}

void solve() {
	ll ans = 0;
	for (int i = 0; i < h; i++)
		ans = max(dp(0, i, 0), ans);
	printf("%llu\n", ans);
}
int main() {
	load();
	solve();
}