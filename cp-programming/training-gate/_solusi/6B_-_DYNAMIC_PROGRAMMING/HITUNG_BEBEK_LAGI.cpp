#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define INF 1123456789

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define reset(a, b) memset(a, b, sizeof(a))
#define debug(a) cerr << #a << '=' << a << endl;

void print(int x, bool leadingz) {
	if (leadingz) {
		int tmp = x, len = 0;

		while (tmp > 0) {
			tmp /= 10;
			len++;
		}

		for (int i = 0; i < 6-len; i++)
			printf("0");		
	}	
	printf("%d\n", x);	
}

pair<int, int> dp[1000001];

int main() {
	ios_base::sync_with_stdio(false);	

	dp[0] = mp(1, 1);

	int x = 1, y = 1, idx = 1;

	for (int i = 2; i <= 10000000; i++) {
		int tmp = x;
		x = (x + y) % 1000000;
		y = tmp;

		// debug(i);
		// debug(x);
		if (i % 10 == 0)
			dp[idx].fs = x;
		else if (i % 10 == 1)
			dp[idx++].sc = x;
	}
	
	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);

		if (n % 10 == 0)
			print(dp[n/10].fs, n >= 30);		
		else if (n % 10 == 1)
			print(dp[n/10].sc, n >= 30);
		else {
			y = dp[n/10].fs, x = dp[n/10].sc;

			for (int i = 2; i <= n % 10; i++) {
				int tmp = x;
				x = (x + y) % 1000000;
				y = tmp;
			}

			print(x, n >= 30);
		}			
	}	
}