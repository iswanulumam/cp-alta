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
	
#define N 10000

int n, y, arr[N], dp[2][1001], tmp[1001];

int comp(int x, int y) {
	if (x == -1 || y == -1) {
		if (x == y)
			return -1;
		else
			return max(x, y);
	} else
		return min(x, y);	
}
int main() {
	ios_base::sync_with_stdio(false);	
		
	reset(dp, 0);
	scanf("%d %d", &n, &y);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	for (int j = 1; j <= y; j++)
		dp[0][j] = (arr[0] == j) ? 1 : -1;
	
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= y; j++) {			
			if (arr[i] <= j) {
				int ambil = dp[0][j-arr[i]], tinggal = dp[0][j];
				
				if (ambil == -1 || tinggal == -1) {
					if (ambil == tinggal)
						dp[1][j] = -1;
					else {
						if (ambil == -1)
							dp[1][j] = tinggal;
						else
							dp[1][j] = 1 + ambil;
					}							
				} else {
					dp[1][j] = min(1+ambil, tinggal);
				}
			} else
				dp[1][j] = dp[0][j];
		}

		for (int j = 1; j <= y; j++) {
			dp[0][j] = dp[1][j];
		}
	}	

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j <= y; j++) {
	// 		cout << dp[i][j] << '\t';
	// 	}
	// 	cout << endl;
	// }

	cout << dp[1][y] << endl;
}