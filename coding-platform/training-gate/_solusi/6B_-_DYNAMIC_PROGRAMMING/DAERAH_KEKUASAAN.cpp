#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define reset(a, b) memset(a, b, sizeof(a))
#define dump(a) cerr << #a << " = " << a << endl

using namespace std;

void open(string s) {
    #ifndef ONLINE_JUDGE
    freopen(s.c_str(), "r", stdin);
    #endif // ONLINE_JUDGE
}

int cnt[201][201];
bool peta[201][201];

int main() {
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int b, k, n, l;
		
		scanf("%d %d %d %d", &b, &k, &n, &l);
		reset(peta, true);
		
		for (int i = 0; i < n; i++) {
			int x1, y1, x2, y2;
			scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
			
			for (int j = y1; j <= y2; j++)
				for (int k = x1; k <= x2; k++)
					peta[j][k] = false;			
		}
		
		reset(cnt, 0);
		
		for (int i = 1; i <= b; i++)
			for (int j = 1; j <= k; j++) {
				cnt[i][j] = cnt[i-1][j] + cnt[i][j-1] - cnt[i-1][j-1];
				if (peta[i][j]) cnt[i][j]++;
			}
				
		bool ans = false, done = false;
		for (int r1 = 1; r1 <= b && !done; r1++) {
			for (int c1 = 1; c1 <= k && !done; c1++) {
				if (!peta[r1][c1]) continue;
				
				for (int r2 = r1; r2 <= b && !done; r2++) {
					int a = (r2-r1+1);
					for (int c2 = (l+c1*a-a)/a; c2 <= k && !done; c2++) {
						if (!peta[r2][c2]) continue;
						int size = (r2-r1+1)*(c2-c1+1);
						int size_cnt = cnt[r2][c2]-cnt[r2][c1-1]-cnt[r1-1][c2]+cnt[r1-1][c1-1];
						
						if (size != size_cnt) continue;
						
						if (size >= l) {
							ans= true;
							done = true;
						}
					}
				}
			}
		}
		
		if (ans) puts("YA"); else puts("TIDAK");
	}
}